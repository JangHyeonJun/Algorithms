//#include <iostream>
//#include <queue>
//
//using namespace std;
//
//
//
//int main()
//{
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	priority_queue<int, vector<int>, greater<int>> pq;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n*n; i++)
//	{
//		int input;
//		cin >> input;
//		pq.push(input);
//		if (i > n-1)
//			pq.pop();
//	}
//	cout << pq.top();
//	//배열로 풀기
//	//int n;
//	//short maxRow[1500];
//	//int maxNum;
//	//int maxCol;
//	//cin >> n;
//	//int** arr = new int*[n];
//	//for (int i = 0; i < n; i++)
//	//	arr[i] = new int[n];
//	//for (int i = 0; i < n; i++)
//	//{
//	//	for (int j = 0; j < n; j++)
//	//		cin >> arr[i][j];
//	//	maxRow[i] = n - 1;
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	maxNum = INT_MIN;
//	//	for (int j = 0; j < n; j++)
//	//	{
//	//		if (arr[maxRow[j]][j] > maxNum)
//	//		{
//	//			maxNum = arr[maxRow[j]][j];
//	//			maxCol = j;
//	//		}
//	//	}
//	//	maxRow[maxCol]--;
//	//}
//
//	//cout << maxNum;
//
//	return 0;
//}