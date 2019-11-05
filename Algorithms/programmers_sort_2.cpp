//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Compare
//{
//	bool operator()(int a, int b)
//	{
//		string s1 = to_string(a) + to_string(b);
//		string s2 = to_string(b) + to_string(a);
//		int num1 = atoi(s1.c_str());
//		int num2 = atoi(s2.c_str());
//
//		return num1 > num2;
//	}
//};
//
//string solution(vector<int> numbers) {
//	string answer = "";
//
//	sort(numbers.begin(), numbers.end(), Compare());
//
//	for (int n : numbers)
//		answer += to_string(n);
//
//	if (answer[0] == '0')
//		answer = "0";
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 3, 30, 34, 5, 9 };
//	solution(v);
//
//	return 0;
//}