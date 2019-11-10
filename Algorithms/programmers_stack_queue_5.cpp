//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string arrangement) {
//	char prev = '(';
//	int sum = 0;
//	int bar = 0;
//	for (char c : arrangement)
//	{
//		if (c == '(')
//		{
//			bar++;
//			prev = '(';
//		}
//		else
//		{
//			if (prev == '(')
//			{
//				bar--;
//				sum += bar;
//				prev = ')';
//			}
//			else
//			{
//				bar--;
//				sum++;
//				prev = ')';
//			}
//		}
//	}
//	return sum;
//}
////
////int main()
////{
////	string s = "()(((()())(())()))(())";
////	solution(s);
////}