//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> tree;
//
//int BinarySearch(vector<int> tree, int need_height)
//{
//	int front = 0;
//	int mid;
//	int rear = *(tree.end()-1);
//	while (front <= rear)
//	{
//		mid = (front + rear) / 2;
//		long long sum = 0;
//		for (int i : tree)
//			if(i > mid)
//				sum += i - mid;
//
//		if (sum >= need_height)
//		{
//			front = mid + 1;
//		}
//		else
//			rear = mid - 1;
//	}
//
//	return rear;
//}
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	tree.reserve(N);
//	for (int i = 0; i < N; i++)
//	{
//		int input;
//		cin >> input;
//		tree.push_back(input);
//	}
//	sort(tree.begin(), tree.end());
//	cout << BinarySearch(tree, M);
//
//	return 0;
//}