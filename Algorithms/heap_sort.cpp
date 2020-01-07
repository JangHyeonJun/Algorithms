//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//#define parent(x) (x-1)/2
//inline void swap(int& a, int& b)
//{
//	int tmp = move(a);
//	a = move(b);
//	b = move(tmp);
//}
//
//void maxHeap(vector<int>& v, const int size)
//{
//	for (int i = 1; i <= size; i++)
//	{
//		int child = i;
//		while (child > 0)
//		{
//			int root = parent(child);
//			if (v[root] < v[child])
//				swap(v[root], v[child]);
//			child = root;
//		}
//	}
//}
//
//int main()
//{
//	vector<int> v = { 11,7,5,2,7,6,1,4,5,3,8,10,9 };
//	for (int i = v.size() - 1; i >= 0; i--)
//	{
//		maxHeap(v, i);
//		swap(v[0], v[i]);
//	}
//
//	for (int n : v)
//		cout << n << ' ';
//}