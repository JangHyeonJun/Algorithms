//#include <iostream>
//
//using namespace std;
//
//
//bool checkHAN(int n)
//{
//	int num1 = 0;
//	int num10 = 0;
//	int num100 = 0;
//
//	if (n < 100)
//		return true;
//	else
//	{
//		num100 = n / 100;
//		num10 = (n - num100 * 100) / 10;
//		num1 = n % 10;
//
//		if ((num100 - num10) == (num10 - num1))
//			return true;
//		else
//			return false;
//	}
//}
//
//int getCountHAN(int n)
//{
//	int count = 0;
//
//	for (int i = 1; i <= n; i++)
//		if (checkHAN(i))
//			count++;
//
//	return count;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	cout << getCountHAN(N) << '\n';
//}