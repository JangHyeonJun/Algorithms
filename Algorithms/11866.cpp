//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n, k;
//	vector<int> v;
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++)
//		v.push_back(i);
//
//	cout << '<';
//	vector<int>::iterator iter = v.begin();
//	
//	while (v.size() > 1)
//	{
//		for (int i = 0; i < k-1; i++)
//		{
//			if (iter == v.end())
//				iter = v.begin();
//			iter++;
//			if (iter == v.end())
//				iter = v.begin();
//		}
//		cout << *iter << ", ";
//		iter = v.erase(iter);
//	}
//	cout << v[0] << '>';
//
//	return 0;
//}