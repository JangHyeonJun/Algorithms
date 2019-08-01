//#include <iostream>
//
//#define __min(a,b) (((a) < (b)) ? (a) : (b))
//
//using namespace std;
//
//int count5(int num)
//{
//	int count = 0;
//	for (int i = num; i/5 > 0; i /= 5)
//	{
//		count += i / 5;
//	}
//	return count;
//}
//int count2(int num)
//{
//	int count = 0;
//	for (int i = num; i/2 > 0; i /= 2)
//	{
//		count += i / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int five, two;
//
//	five = count5(n) - count5(m) - count5(n-m);
//	two = count2(n) - count2(m) - count2(n-m);
//	cout << __min(five, two);
//
//	return 0;
//}