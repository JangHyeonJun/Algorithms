//#include <string>
//#include <vector>
//using namespace std;
//
//bool isRight(string s)
//{
//	int count = 0;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '(')
//			count++;
//		else if(s[i] == ')')
//			count--;
//		if (count < 0)
//			return false;
//	}
//
//	return true;
//}
//
//int findBalancedIndex(string s)
//{
//	int count = 0;
//	int i;
//	for (i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '(')
//			count++;
//		else if(s[i] == ')')
//			count--;
//
//		if (count == 0)
//			break;
//	}
//	return i;
//}
//
//void changeBracket(string& s)
//{
//	for (int i = 0; i < s.length(); i++)
//		if (s[i] == '(')
//			s[i] = ')';
//		else
//			s[i] = '(';
//}
//
//string convert(string w)
//{
//	string s;
//	if (w == "")
//		s = w;
//	else if (isRight(w))
//		s = w;
//	else
//	{
//		int index = findBalancedIndex(w) + 1;
//		string u = w.substr(0, index);
//		string v = w.substr(index);
//		if (isRight(u))
//			s = u + convert(v);
//		else
//		{
//			u.erase(u.end() - 1);
//			u.erase(u.begin());
//			changeBracket(u);
//			s = "(" + convert(v) + ")" + u;
//		}
//	}
//
//	return s;
//}
//
//string solution(string p) {
//	return convert(p);
//}
//
//int main()
//{
//	string s = "))((";
//	solution(s);
//}