//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//const int max_num = 10000000;
//bool dp[max_num];
//
//
//int countPrimeNum(string numbers)
//{
//	int count = 0;
//	const int max = atoi(numbers.c_str());
//	vector<bool> used;
//
//	for (int i = 2; i <= max; i++)
//	{
//		if (dp[i])
//		{
//			bool counting = true;
//			used.clear();
//			used.assign(numbers.length(), false);
//			string s_i = to_string(i);
//			for (int j = 0; j < s_i.length(); j++)
//			{
//				bool findPrime = false;
//				for (int k = 0; k < used.size(); k++)
//				{
//					if (s_i[j] == numbers[k] && !used[k])
//					{
//						findPrime = true;
//						used[k] = true;
//						break;
//					}
//					
//				}
//				if (!findPrime)
//				{
//					counting = false;
//					break;
//				}
//			}
//
//			if (counting)
//				count++;
//		}
//	}
//
//	return count;
//}
//
//void makePrime(int n)
//{
//	dp[0] = false;
//	dp[1] = false;
//	for (int i = 2; i <= n; i++)
//		dp[i] = true;
//
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (dp[i])
//		{
//			for (int j = i * 2; j <= n; j += i)
//				dp[j] = false;
//		}
//	}
//}
//
//int solution(string numbers) {
//	sort(numbers.begin(), numbers.end(), greater<int>());
//	makePrime(atoi(numbers.c_str()));
//
//	return countPrimeNum(numbers);
//}
//
////int main()
////{
////	string s = "011";
////	solution(s);
////
////	return 0;
////}