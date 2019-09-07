//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool isCorrect(string s)
//{
//	int count = 0;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '(')
//			count++;
//		else
//			count--;
//
//		if (count < 0)
//			return false;
//	}
//	return true;
//}
//
//string bracket(string w)
//{
//	if (w.length() == 0 || isCorrect(w))
//		return w;
//	string str;
//	string u, v;
//	int L = 0, R = 0;
//	int index = 0;
//	for (int i = 0; i < w.length(); i++)
//	{
//		if (w[i] == '(')
//			L++;
//		else
//			R++;
//		if (L == R)
//		{
//			u = w.substr(0, i + 1);
//			v = w.substr(i + 1);
//			break;
//		}
//	}
//
//	if (isCorrect(u))
//		return u + bracket(v);
//	else
//	{
//		str = "(" + bracket(v) + ")";
//		u.erase(u.end() - 1);
//		u.erase(u.begin());
//		reverse(u.begin(), u.end());
// 		str += u;
//	}
//
//	return str;
//}
//
//string solution(string p) {
//	string answer = "";
//	answer = bracket(p);
//	return answer;
//}
//
//int main()
//{
//	string s = "()))((()";
//	cout << bracket(s) << endl;
//	return 0;
//}