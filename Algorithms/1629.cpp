//#include <iostream>
//
//using namespace std;
//
//typedef long long ll;
//
//ll getPower(int num, int count, int remainder)
//{
//	if (count == 1)
//		return num % remainder;
//	else
//	{
//		if (count % 2 == 0)
//		{
//			ll sub = getPower(num, count / 2, remainder);
//			return sub * sub % remainder;
//		}
//		else
//		{
//			ll sub = getPower(num, (count-1) / 2, remainder);
//			return (sub * sub % remainder) * num % remainder;
//		}
//	}
//}
//int main()
//{
//	int a, b, c;
//	int num = 1;
//	cin >> a >> b >> c;
//	cout << getPower(a, b, c);
//	return 0;
//}