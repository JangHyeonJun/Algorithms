//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool check(vector<vector<int>> rule, int num)
//{
//	for (int i = 0; i < rule.size(); i++)
//	{
//		int strike = 0, ball = 0;
//
//		string expect = to_string(num);
//		string result = to_string(rule[i][0]);
//
//		for (int j = 0; j < expect.length(); j++)
//		{
//			for (int k = 0; k < expect.length(); k++)
//			{
//				if (expect[j] == result[k])
//				{
//					if (j == k)
//						strike++;
//					else
//						ball++;
//					break;
//				}
//			}
//		}
//		
//		if (strike != rule[i][1] || ball != rule[i][2])
//			return false;
//	}
//	return true;
//}
//
//int solution(vector<vector<int>> baseball) {
//	int answer = 0;
//	int n = 111;
//	while (n < 1000)
//	{
//		int temp = n;
//		int n100 = temp / 100;
//		temp -= n100 * 100;
//		int n10 = temp / 10;
//		int n1 = temp % 10;
//		if (n100 != n10 && n100 != n1 && n10 != n1 && n10 != 0 && n1 != 0)
//		{
//			if(check(baseball, n))
//				answer++;
//		}
//		n++;
//	}
//	return answer;
//}
////
////int main()
////{
////	vector<vector<int>> v = { {123, 1, 1}, {356, 1, 0},
////	{327, 2, 0}, {489, 0, 1} };
////	solution(v);
////
////	return 0;
////}