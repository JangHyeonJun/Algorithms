//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <string>
//using namespace std;
//
//int solution(int N) {
//	string s = "";
//	int max_len = 0;
//
//	while (N >= 2)
//	{
//		s = to_string(N % 2) + s;
//		N /= 2;
//	}
//	s = to_string(N) + s;
//
//	int prev = -1;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (prev == -1 && s[i] == '1')
//			prev = i;
//		else
//			if (s[i] == '1')
//			{
//				if (i - prev - 1 > max_len)
//					max_len = i - prev - 1;
//				prev = i;
//			}
//	}
//
//	return max_len;
//	// write your code in C++14 (g++ 6.2.0)
//}