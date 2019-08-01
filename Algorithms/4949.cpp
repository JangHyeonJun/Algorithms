//#include <iostream>
//#include <string>
//#include <stack>
//
//using namespace std;
//
//int main()
//{
//	
//	while (true)
//	{
//		string s;
//		getline(cin, s);
//
//		if (s == ".")
//			break;
//
//		stack<char> sen;
//
//
//		for (int i = s.length() - 1; i >= 0; i--)
//		{
//			if (s[i] == ')')
//				sen.push(')');
//
//			else if (s[i] == '(')
//				if (!sen.empty() && sen.top() == ')')
//					sen.pop();
//				else
//				{
//					sen.push('x');
//					break;
//				}
//
//			else if (s[i] == ']')
//				sen.push(']');
//
//			else if (s[i] == '[')
//				if (!sen.empty() && sen.top() == ']')
//					sen.pop();
//				else
//				{
//					sen.push('x');
//					break;
//				}
//		}
//
//		if (sen.empty())
//			cout << "yes" << '\n';
//		else
//			cout << "no" << '\n';
//
//	}
//	return 0;
//}