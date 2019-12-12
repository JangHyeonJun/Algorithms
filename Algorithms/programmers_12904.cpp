//#include <iostream>
//#include <string>
//using namespace std;
//
//int solution(string s)
//{
//	int len = 1;
//	int max_len = len;
//
//	for (int i = 0; i < s.length()-1; i++)
//	{
//		if (i > 0 && s[i - 1] == s[i + 1])
//		{
//			len = 1;
//			int left = i - 1;
//			int right = i + 1;
//			while (left >= 0 && right <s.length() && s[left] == s[right])
//			{
//				len += 2;
//				left--;
//				right++;
//			}
//		}
//		if (len > max_len)
//			max_len = len;
//
//		if (s[i] == s[i + 1])
//		{
//			len = 0;
//			int left = i;
//			int right = i + 1;
//			while (left >= 0 && right < s.length() && s[left] == s[right])
//			{
//				len += 2;
//				left--;
//				right++;
//			}
//		}
//		
//		if (len > max_len)
//			max_len = len;
//	}
//
//	return max_len;
//}
//
//int main()
//{
//	string s = "kfgeddddbd";
//	solution(s);
//}