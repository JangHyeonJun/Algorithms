//#include <iostream>
//#define max(a,b) (((a) > (b)) ? (a) : (b))
//
//int main()
//{
//	int a, b;
//	int divisor = 1, multiple = 1;
//	std::cin >> a >> b;
//
//	for (int i = max(a, b); i > 0; i--)
//	{
//		if (a%i == 0 && b%i == 0)
//		{
//			divisor = i;
//			break;
//		}
//	}
//	for (int i = max(a, b); i <= a*b; i+=divisor)
//	{
//		if (i%a == 0 && i%b == 0)
//		{
//			multiple = i;
//			break;
//		}
//	}
//
//	std::cout << divisor << '\n' << multiple;
//
//	return 0;
//}