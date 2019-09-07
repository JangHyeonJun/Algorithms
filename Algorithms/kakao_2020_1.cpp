//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int getLength(string s)
//{
//	int len = s.length();
//	for (int i = 1; i < s.length(); i++)
//	{
//		vector<string> subStr;
//		int curLen = 0;
//		for (int j = 0; j < s.length(); j += i)
//		{
//			subStr.push_back(s.substr(j, i));
//		}
//		int j = 0;
//		int count = 0;
//		while(j < subStr.size())
//		{
//			if (j > 0 && subStr[j] == subStr[j - 1])
//			{
//				count++;
//				if (j == subStr.size() - 1)
//					curLen++;
//			}
//			else
//			{
//				if (count > 0)
//				{
//					while (count >= 10)
//					{
//						count /= 10;
//						curLen++;
//					}
//					count = 0;
//					curLen++;
//				}
//				curLen += subStr[j].length();
//			}
//			j++;
// 		}
//		if (len > curLen)
//			len = curLen;
//	}
//	return len;
//}
//
//int solution(string s) {
//	int answer = 0;
//	answer = getLength(s);
//	return answer;
//}
//
//int main()
//{
//	string s = "abcabcabcabcdedededededed";
//	string s2 = "ababcdcdababcdcd";
//	string s3 = "q";
//	cout << getLength(s) << endl;
//	cout << getLength(s2) << endl;
//	cout << getLength(s3) << endl;
//	return 0;
//}