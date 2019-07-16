//#include <iostream>
//
//using namespace std;
//long long comp(long long a, long long b)
//{
//	if (a > b)
//		return 1;
//	else if (a == b)
//		return 0;
//	else
//		return -1;
//}
//
//void quick_sort(long long *data, long long start, long long end)
//{
//	// only 1 element
//	if (start >= end)
//		return;
//
//	long long pivot = start;
//	long long i = pivot + 1;
//	long long j = end;
//	long long temp;
//
//
//	while (i <= j)
//	{
//		// until the pivots long longersect
//		while (i <= end && comp(data[i], data[pivot]) <= 0)
//			i++;
//		while (j > start && comp(data[j], data[pivot]) >= 0)
//			j--;
//
//		if (i > j)
//		{
//			temp = data[j];
//			data[j] = data[pivot];
//			data[pivot] = temp;
//		}
//		else
//		{
//			temp = data[i];
//			data[i] = data[j];
//			data[j] = temp;
//		}
//	}
//
//	quick_sort(data, start, j - 1);
//	quick_sort(data, j + 1, end);
//}
//int main()
//{
//	int n;
//	cin >> n;
//	long long *divisor = new long long[n];
//
//	for (long long i = 0; i < n; i++)
//		cin >> divisor[i];
//	quick_sort(divisor, 0, n - 1);
//	cout << divisor[0] * divisor[n - 1];
//
//
//	return 0;
//}