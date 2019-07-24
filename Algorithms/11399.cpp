//#include <iostream>
//#include <algorithm>
//
//bool comp(const short a, const short b)
//{
//	if (a < b)
//		return true;
//	else if (a == b)
//		return false;
//	else
//		return false;
//}
//
//int main()
//{
//	int num = 0, sum = 0;
//	short n;
//	std::cin >> n;
//	short* p = new short[n];
//
//	for (int i = 0; i < n; i++)
//		std::cin >> p[i];
//
//	std::sort(p, p + n, comp);
//	for (int i = 0; i < n; i++)
//	{
//		num += p[i];
//		sum += num;
//	}
//
//	std::cout << sum;
//
//	delete[] p;
//
//	return 0;
//}