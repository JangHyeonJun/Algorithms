//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//int main()
//{
//	int n, m;
//
//	cin >> n >> m;
//
//	int* find = new int[m];
//	deque<int> dq;
//
//	// initialization
//	for (int i = 1; i <= n; i++)
//		dq.push_back(i);
//	for (int j = 0; j < m; j++)
//		cin >> find[j];
//	
//	int order = 0;
//	int findIndex = 0;
//	int count = 0;
//
//	while (order < m)
//	{
//		for (int i = 0; i < dq.size(); i++)
//			if (dq[i] == find[order])
//				findIndex = i;
//		if (findIndex != 0)
//		{
//			if (findIndex * 2 < dq.size())
//			{
//				for (int i = 0; i < findIndex; i++)
//				{
//					dq.push_back(dq.front());
//					dq.pop_front();
//					count++;
//				}
//			}
//			else
//			{
//				for (int i = dq.size() - 1; i >= findIndex; i--)
//				{
//					dq.push_front(dq.back());
//					dq.pop_back();
//					count++;
//				}
//			}
//		}
//
//		dq.pop_front();
//		order++;
//	}
//
//	cout << count;
//
//
//	return 0;
//}