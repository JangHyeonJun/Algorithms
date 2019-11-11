//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string s = "abcabcabd";
//	int answer = 0;
//
//	for (int i = 1; i < s.length(); i++)
//	{
//		string sub = s.substr(0, i);
//		size_t index = s.find(sub);
//		while(index != string::npos)
//		{
//			if (index == s.length() - sub.length())
//				cout << "gg";
//			index = s.find(sub, index+1);
//		}
//	}
//	return s.length();
//}