//#include <bits/stdc++.h>
//
//using namespace std;
//
//string ltrim(const string&);
//string rtrim(const string&);
//
//
//
///*
// * Complete the 'reciprocal' function below.
// *
// * The function accepts INTEGER N as parameter.
// */
//
//void reciprocal(int N) {
//	string s = "0.";
//	string repeated = "";
//	int dvidend = 1;
//	int start_count;
//	int len = to_string(N).length();
//	if (len > 3)
//		start_count = len;
//	else
//		start_count = len;
//	while (true)
//	{
//		dvidend *= 10;
//		int quotient = dvidend / N;
//		int remainder = dvidend % N;
//
//		if (start_count < 1)
//		{
//			repeated += to_string(quotient);
//			auto index = s.find(repeated);
//			if (index == string::npos)
//			{
//
//				if (repeated.length() > 2)
//				{
//					auto iter = repeated.begin();
//					bool all_same = true;
//					while (iter != repeated.end())
//					{
//						if (*iter != repeated.front())
//						{
//							all_same = false;
//							break;
//						}
//						iter++;
//					}
//					if (all_same)
//					{
//						if (repeated.front() == s.back())
//							s.erase(s.end() - 1);
//						repeated = repeated.front();
//						break;
//					}
//
//					string temp = repeated;
//					temp.erase(temp.end() - 1);
//					auto temp_iter = s.find(temp);
//					if (temp_iter != string::npos &&
//						temp_iter + temp.length() == s.length())
//					{
//						repeated.erase(repeated.end() - 1);
//						break;
//					}
//				}
//
//				s += repeated.front();
//				repeated.erase(repeated.begin());
//
//			}
//		}
//		else
//		{
//			s += to_string(quotient);
//			start_count--;
//		}
//		dvidend = remainder;
//	}
//	cout << s << ' ' << repeated << endl;
//}
//
//int main()