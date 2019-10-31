//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//queue<int> get_tail_nodes(vector<int> edge_num)
//{
//	queue<int> nodes;
//	for (int i=1; i<edge_num.size(); i++)
//		if (edge_num[i] == 0)
//			nodes.push(i);
//	return nodes;
//}
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int N, M;
//	cin >> N >> M;
//
//	vector<vector<int>> arr(N+1, vector<int>());
//	vector<int> edge_num(N + 1, 0);
//	vector<int> order;
//
//	for (int i = 1; i <= M; i++)
//	{
//		int A, B;
//		cin >> A >> B;
//		arr[A].push_back(B);
//		edge_num[B]++;
//	}
//
//	queue<int> tail_nodes = get_tail_nodes(edge_num);
//	while (!tail_nodes.empty())
//	{
//		while (!tail_nodes.empty())
//		{
//			int node = tail_nodes.front();
//			tail_nodes.pop();
//			edge_num[node]--;
//
//			for (int linked_node : arr[node])
//				edge_num[linked_node]--;
//			order.push_back(node);
//		}
//
//		tail_nodes = get_tail_nodes(edge_num);
//	}
//
//	for (int n : order)
//		cout << n << ' ';
//
//	return 0;
//}