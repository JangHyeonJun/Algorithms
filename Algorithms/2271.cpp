//#include <iostream>
//#include <algorithm>
//
//bool comp(const int a, const int b)
//{
//	if (a > b) return true;
//	else return false;
//}
//
//int main()
//{
//	int n, max = 0;
//	std::cin >> n;
//	int *weight = new int[n];
//
//	for (int i = 0; i < n; i++)
//		std::cin >> weight[i];
//
//	std::sort(weight, weight + n, comp);
//
//	for (int i = 0; i < n; i++)
//	{
//		if (max < weight[i] * (i + 1))
//			max = weight[i] * (i + 1);
//	}
//
//	std::cout << max;
//
//	delete[] weight;
//
//	return 0;
//}