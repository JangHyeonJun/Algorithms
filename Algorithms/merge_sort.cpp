//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void merge(int left, int right, vector<int>& v)
//{
//	int mid = (left + right) / 2;
//	int l = left;
//	int r = mid + 1;
//	vector<int> temp(right - left + 1);
//	for (int i = 0; i < right - left + 1; i++)
//	{
//		if (l > mid)
//			temp[i] = v[r++];
//		else if (r > right)
//			temp[i] = v[l++];
//		else
//		{
//			if (v[l] < v[r])
//				temp[i] = v[l++];
//			else
//				temp[i] = v[r++];
//		}
//	}
//
//	for (int i = 0; i < temp.size(); i++)
//		v[left + i] = temp[i];
//}
//
//void partition(int left, int right, vector<int>& v)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		partition(left, mid, v);
//		partition(mid + 1, right, v);
//		merge(left, right, v);
//	}
//}
//
//int main()
//{
//	vector<int> v = { 11,7,5,2,7,6,1,4,5,3,8,10,9 };
//	partition(0, v.size() - 1, v);
//	for (int n : v)
//		cout << n << ' ';
//}