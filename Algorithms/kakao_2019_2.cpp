//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//#include <cmath>
//
//using namespace std;
//
//double getFailureRate(int fail, int player)
//{
//	if (player == 0)
//		return 0;
//	return (double)fail / (double)player;
//}
//
//struct Compare
//{
//	bool operator()(const pair<int, double> a, const pair<int, double> b)
//	{
//		if (abs(a.second - b.second) < 1.0e-12)
//			return a.first > b.first;
//		return (a.second < b.second);
//	}
//};
//
//vector<int> solution(int N, vector<int> stages) {
//	vector<int> answer;
//
//	priority_queue<pair<int, double>, vector<pair<int, double>>, Compare> pq;
//
//	int arrivalPlayer[502] = { 0, };
//
//	for (int i = 0; i < stages.size(); i++)
//		for (int j = 1; j <= stages[i]; j++)
//			arrivalPlayer[j]++;
//	for (int i = 1; i < N + 1; i++)
//		pq.push(make_pair(i, getFailureRate(arrivalPlayer[i] - arrivalPlayer[i+1], arrivalPlayer[i])));
//	while(!pq.empty())
//	{
//		answer.push_back(pq.top().first);
//		pq.pop();
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 2,1,2,6,2,4,3,3 };
//	vector<int> v1 = { 2,1,2,6,2,1,3,3 };
//	vector<int> v2 = { 4,4,4,4,4 };
//	vector<int> v3 = { 1,2,3 };
//	vector<int> v4 = { 501, 1,2,3,4,5,6,7,8,9 };
//	vector<int> answer = solution(5, v);
//	for (int i = 0; i < answer.size(); i++)
//		cout << answer[i] << endl;
//
//	return 0;
//}