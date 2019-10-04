//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//typedef pair<int, int> ii;
//bool chess[13][13];
//bool visit[13][13];
//vector<vector<ii>> chessCase;
//
//void initVisit()
//{
//	for (int i = 0; i < 13; i++)
//		for (int j = 0; j < 13; j++)
//			visit[i][j] = false;
//}
//
//bool isOverlap(vector<ii> a1, vector<ii> a2)
//{
//	for (int i = 0; i < a1.size(); i++)
//	{
//		bool flag = false;
//
//		for (int j = 0; j < a2.size(); j++)
//			if (a1[i] == a2[j])
//				flag = true;
//
//		if (!flag)
//			return false;
//	}
//	return true;
//}
//
//bool canSet(vector<ii> arr)
//{
//	for(int i=0; i<arr.size(); i++)
//		for (int j = 0; j < arr.size(); j++)
//		{
//			if (i == j)
//				continue;
//			if (arr[i].first == arr[j].first)
//				return false;
//			if (arr[i].second == arr[j].second)
//				return false;
//			if (abs(arr[i].first - arr[j].first)
//				== abs(arr[i].second - arr[j].second))
//				return false;
//		}
//	return true;
//}
//
//void makeSet(int n, vector<ii> arr)
//{
//	if (arr.size() == n)
//	{
//		chessCase.push_back(arr);
//		visit[arr[0].first][arr[0].second] = true;
//		return;
//	}
//
//
//
//
//	for(int i=0; i<n; i++)
//		for (int j=0; j < n; j++)
//		{
//			if (arr.size() > 0)
//				if (i < arr.back().first && j < arr.back().second)
//					continue;
//			if (!chess[i][j] && !visit[i][j])
//			{
//				arr.push_back(make_pair(i, j));
//				chess[i][j] = true;
//				if (canSet(arr))
//					makeSet(n, arr);
//				chess[i][j] = false;
//				arr.pop_back();
//			}
//		}
//}
//
//int solution(int n) {
//	int answer = 0;
//	makeSet(n, vector<ii>());
//	for (int i = 0; i < chessCase.size()-1; i++)
//		for (int j = i + 1; j < chessCase.size(); j++)
//		{
//			if (isOverlap(chessCase[i], chessCase[j]))
//			{
//				chessCase.erase(chessCase.begin() + j);
//				j--;
//			}
//		}
//
//	answer = chessCase.size();
//	return answer;
//}
//
//int main()
//{
//	cout << solution(4);
//	return 0;
//}