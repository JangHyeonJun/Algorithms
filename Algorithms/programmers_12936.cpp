#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int n, long long k)
{
	vector<int> v;
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	do {
		k--;
		for (int n : v)
			cout << n << ' ';
		cout << endl;
	} while (next_permutation(v.begin(), v.end()) && k > 1);
}

vector<int> solution(int n, long long k)
{
	vector<int> answer;
	vector<bool> used(n + 1, false);
	int max_case = 1;
	int num = 1;
	int multiply_num = 1;
	for (; multiply_num < n; multiply_num++)
		max_case *= multiply_num;
	multiply_num--;
	while (true)
	{
		if (answer.size() == n)
			break;
		if (k > max_case && num < n)
		{
			num++;
			k -= max_case;
		}
		else
		{
			if (!used[num])
			{
				answer.push_back(num);
				used[num] = true;
				if(multiply_num != 0)
					max_case /= multiply_num--;
				num = 1;
			}
			else
				num++;
		}
	}
	return answer;
}

int main()
{
	print(6, 25);
}