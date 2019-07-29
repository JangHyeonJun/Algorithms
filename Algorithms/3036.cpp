//#include <iostream>
//
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
//int main()
//{
//	int n;
//	std::cin >> n;
//	int *num = new int[n];
//	for (int i = 0; i < n; i++)
//		std::cin >> num[i];
//
//	for (int i = 1; i < n; i++)
//	{
//		int gcd = findGCD(num[0], num[i]);
//		std::cout << num[0] / gcd << '/' << num[i] / gcd << '\n';
//	}
//
//	delete[] num;
//
//	return 0;
//}