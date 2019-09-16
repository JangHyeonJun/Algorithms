//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//typedef pair<int, int> ii;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	queue<ii> root;
//	vector<vector<int>> node(N);
//	vector<int> parentNode(N, -1);
//	for (int i = 0; i < N-1; i++)
//	{
//		int node1, node2;
//		cin >> node1 >> node2;
//		node1--;
//		node2--;
//		if (node1 > node2)
//		{
//			int buf = node1;
//			node1 = node2;              
//			node2 = buf;
//		}
//		if (node1 == 0)
//			root.push(make_pair(node1, node2));
//		node[node1].push_back(node2);
//		node[node2].push_back(node1);
//	}
//	while(!root.empty())
//	{
//		int parent = root.front().second;
//		for (int i = 0; i < node[parent].size(); i++)
//		{
//			int connectedNode = node[parent][i];
//			if(parentNode[connectedNode] == -1)
//				root.push(make_pair(parent, connectedNode));
//		}
//		parentNode[parent] = root.front().first;
//		root.pop();
//	}
//
//	for (int i = 1; i <= N - 1; i++)
//		cout << parentNode[i] + 1 << '\n';
//
//
//	return 0;
//}