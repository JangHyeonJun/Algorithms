//#include <iostream>
//
//using namespace std;
//
//int comp(pair<int, int> a, pair<int, int> b)
//{
//	if (a.second > b.second)
//		return 1;
//	else if (a.second == b.second)
//	{
//		if (a.first > b.first)
//			return 1;
//		else if (a.first == b.first)
//			return 0;
//		else
//			return -1;
//	}
//	else
//		return -1;
//}
//
//void quick_sort(pair<int, int> *data, int start, int end)
//{
//	// only 1 element
//	if (start >= end)
//		return;
//
//	int pivot = start;
//	int i = pivot + 1;
//	int j = end;
//	pair<int, int> temp;
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
//	int N;
//	cin >> N;
//
//	pair<int, int> *coord = new pair<int, int>[N];
//
//	for (int i = 0; i < N; i++)
//		cin >> coord[i].first >> coord[i].second;
//
//	quick_sort(coord, 0, N - 1);
//
//	for (int i = 0; i < N; i++)
//		cout << coord[i].first << ' ' << coord[i].second << '\n';
//
//	delete[] coord;
//
//	return 0;
//}