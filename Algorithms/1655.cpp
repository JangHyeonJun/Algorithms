//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	priority_queue<int> l_pq;
//	priority_queue<int, vector<int>, greater<int>> r_pq;
//	
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int input;
//		cin >> input;
//
//		if (l_pq.empty())
//			l_pq.push(input);
//		else if (l_pq.size() <= r_pq.size())
//		{
//			if(input <= r_pq.top())
//				l_pq.push(input);
//			else
//			{
//				l_pq.push(r_pq.top());
//				r_pq.pop();
//				r_pq.push(input);
//			}
//		}
//		else
//		{
//			if (l_pq.top() >= input)
//			{
//				r_pq.push(l_pq.top());
//				l_pq.pop();
//				l_pq.push(input);
//			}
//			else
//				r_pq.push(input);
//		}
//
//		cout << l_pq.top() << '\n';
//	}
//	return 0;
//}