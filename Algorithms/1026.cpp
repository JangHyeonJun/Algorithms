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
//int main()
//{
//	int A[50], B[50];
//	int n, sum = 0;
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//		cin >> A[i];
//	for (int i = 0; i < n; i++)
//		cin >> B[i];
//
//	quick_sort(A, 0, n - 1);
//	quick_sort(B, 0, n - 1);
//
//	for (int i = 0; i < n; i++)
//		sum += A[i] * B[n - i - 1];
//
//	cout << sum;
//
//	return 0;
//}