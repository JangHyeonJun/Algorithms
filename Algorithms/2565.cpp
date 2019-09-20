//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//typedef pair<int, int> II;
//
//
//int FindLIS(vector<II> line)
//{
//	vector<int> len(line.size(), 0);
//	int max = 0;
//	for (int i = 0; i < line.size(); i++)
//	{
//		int pillarIndex = line[i].second;
//		int maxLen = 0;
//		for (int j = 0; j < i; j++)
//		{
//			if (line[j].second < line[i].second)
//				if (len[j] > maxLen)
//					maxLen = len[j];
//		}
//		len[i] = maxLen + 1;
//		if (len[i] > max)
//			max = len[i];
//	}
//
//	return max;
//}
//
//int main()
//{
//	int n;
//	int removeNum = 0;
//	cin >> n;
//	vector<II> line(n);
//	for (int i = 0; i < n; i++)
//	{
//		int A, B;
//		cin >> A >> B;
//		line[i] = make_pair(A, B);
//	}
//	sort(line.begin(), line.end());
//	cout << n - FindLIS(line);
//
//	return 0;
//}