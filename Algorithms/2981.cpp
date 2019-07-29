//#include <iostream>
//#include <math.h>
//#include <vector>
//
//// 유클리드 호제법 사용
//int findGCD(int a, int b)
//{
//	int gcd;
//	while (a%b != 0)
//	{
//		gcd = a % b;
//		a = b;
//		b = gcd;
//	}
//
//	return b;
//}
//
//void printDivisor(const int gcd)
//{
//	std::vector<int> div;
//
//	for (int i = 2; i*i <= gcd; i++)
//		if (gcd % i == 0)
//			div.push_back(i);
//
//	for (int i = 0; i < div.size(); i++)
//		std::cout << div[i] << ' ';
//
//	for (int i = div.size() - 1; i >= 0; i--)
//		if (gcd / div[i] != div[i])
//			std::cout << gcd / div[i] << ' ';
//	std::cout << gcd;
//}
//
//int main()
//{
//	int n;
//	std::cin >> n;
//
//	int num[100];
//	int gcd;
//
//	for (int i = 0; i < n; i++)
//		std::cin >> num[i];
//
//	gcd = abs(num[1] - num[0]);
//	for (int i = 2; i < n; i++)
//		gcd = findGCD(gcd, abs(num[i] - num[i - 1]));
//
//	printDivisor(gcd);
//
//	return 0;
//}