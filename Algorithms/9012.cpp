//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int t;
//	int count;
//	string s;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> s;
//		count = 0;
//		for (int j = s.length() - 1; j >= 0; j--)
//		{
//			if (s[j] == ')')
//				count++;
//			else if (s[j] == '(')
//				count--;
//
//			if (count < 0)
//				break;
//		}
//		if (count == 0)
//			cout << "YES" << '\n';
//		else
//			cout << "NO" << '\n';
//	}
//	return 0;
//}