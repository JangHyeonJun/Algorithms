//#include <iostream>
//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//int sherlockAndAnagrams(string s)
//{
//	int count = 0;
//	for (int i = 0; i < s.length()-1; i++)
//	{
//		for (int j = i+1; j < s.length(); j++)
//		{
//			unordered_map<char,int> um_l, um_r;
//			int n = 0;
//			while (i+n < j)
//			{
//				if (um_l.find(s[i + n]) != um_l.end())
//					um_l[s[i + n]]++;
//				else
//					um_l[s[i + n]] = 1;
//
//				if (um_r.find(s[j - n]) != um_r.end())
//					um_r[s[j - n]]++;
//				else
//					um_r[s[j - n]] = 1;
//
//				if (um_l == um_r)
//					count++;
//				n++;
//			}			
//		}
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = sherlockAndAnagrams("abcd");
//
//	return 0;
//}