//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//
//void selection_sort(vector<int>& v)
//{
//	for (int i = 0; i < v.size(); i++)
//	{
//		int min = i;
//		for (int j = i; j < v.size(); j++)
//			if (v[j] < v[min])
//				min = j;
//		int tmp = move(v[i]);
//		v[i] = move(v[min]);
//		v[min] = move(tmp);
//	}
//}
//
//int main()
//{
//	vector<int> v = { 7,1,4,6,9,5,3,8,2 };
//	selection_sort(v);
//	for (int n : v)
//		cout << n << ' '; \
//		cout << endl;
//}