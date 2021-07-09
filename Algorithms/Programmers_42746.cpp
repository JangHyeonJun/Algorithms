#include <string>
#include <vector>
using namespace std;

// 구조체 연산자 집어넣는거 연습해보고 싶었음.
struct Compare
{
	bool operator()(int a, int b)
	{
		//return a < b;
		string s1 = to_string(a);
		string s2 = to_string(b);

		auto iter1 = s1.begin();
		auto iter2 = s2.begin();

		while (iter1 != s1.end() && iter2 != s2.end())
			if (*iter1 == *iter2)
			{
				iter1++;
				iter2++;
			}
			else
				return *iter1 > *iter2;

		return s1.length() < s2.length();
	}
};

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Sort(vector<int>& v, int low, int high, Compare cmp)
{
	if (low >= high)
		return;

	int left = low;
	int right = high;
	int mid = (low + high) / 2;

	while (left < right)
	{
		if (cmp(v[left], v[mid]))
			left++;
		else if (cmp(v[mid], v[right]))
			right--;
		else
		{
			Swap(v[left], v[right]);
			left++;
			right--;
		}
	}

	Sort(v, low, right, cmp);
	Sort(v, right + 1, high, cmp);
}

string solution(vector<int> numbers) {
	string answer = "";
	Compare c;
	Sort(numbers, 0, numbers.size() - 1, c);
	for(auto& n : numbers)
		answer += to_string(n);

	return answer;
}

int main()
{
	Compare c;
	vector<int> v3 = { 3, 30, 34, 5, 9 };
	vector<int> v2 = { 5,40,92,3,9 };
	vector<int> v1 = { 5,4,2,3,1};
	string s = solution(v3);
	return 0;
}