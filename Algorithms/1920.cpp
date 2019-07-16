//#include <iostream>
//
//using namespace std;
//
//int comp(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a == b)
//		return 0;
//	else
//		return -1;
//}
//
//void quick_sort(int *data, int start, int end)
//{
//	// only 1 element
//	if (start >= end)
//		return;
//
//	int pivot = start;
//	int i = pivot + 1;
//	int j = end;
//	int temp;
//
//	
//	while (i <= j)
//	{
//		// until the pivots intersect
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
//
//int binary_search(int *data, int end, int num)
//{
//	int low, mid, high;
//	low = 0;
//	high = end;
//	while (comp(low, high) <= 0)
//	{
//		mid = (low + high) / 2;
//		if (comp(num, data[mid]) == 0)
//			return mid;
//		else if (comp(num, data[mid]) > 0)
//			low = mid + 1;
//		else
//			high = mid - 1;
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int n, m;
//
//	cin >> n;
//	int *A = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> A[i];
//
//	cin >> m;
//	int *B = new int[m];
//	for (int i = 0; i < m; i++)
//		cin >> B[i];
//
//	quick_sort(A, 0, n-1);
//
//	for (int i = 0; i < m; i++)
//	{
//		if (binary_search(A, n-1, B[i]) != -1)
//			cout << 1 << '\n';
//		else
//			cout << 0 << '\n';
//	}
//
//
//
//	return 0;
//}