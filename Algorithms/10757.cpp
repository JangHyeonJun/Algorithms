//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string a, b, buf;
//	bool carry = false;
//	cin >> a >> b;
//	if (a.length() < b.length())
//	{
//		buf = b;
//		b = a;
//		a = buf;
//	}
//
//	for (int i = 0; i < a.length(); i++)
//	{
//		int num = (int)(a[a.length() - 1 - i] - 48);
//		if(i < b.length())
//			num = (int)(a[a.length() - 1 - i] - 48) + (int)(b[b.length() - 1 - i] - 48);
//		if (carry)
//		{
//			num++;
//			carry = false;
//		}
//		if (num >= 10)
//		{
//			num -= 10;
//			carry = true;
//		}
//		a[a.length() - 1 - i] = num + 48;
//	}
//	if (carry)
//		cout << 1;
//	cout << a;
//
//	return 0;
//}