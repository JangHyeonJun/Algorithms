//#include <string>
//#include <vector>
//#include <deque>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> priorities, int location) {
//	int answer = 0;
//	int count = 0;
//	priority_queue<int, vector<int>, less<int>> pq;
//	deque<pair<int, int>> dq;
//
//	for (int i = 0; i < priorities.size(); i++)
//	{
//		pq.push(priorities[i]);
//		dq.push_back(make_pair(priorities[i], i));
//	}
//
//	while (!dq.empty())
//	{
//		int max_priority = pq.top();
//		if (dq.front().first == max_priority)
//		{
//			count++;
//			if (dq.front().second == location)
//				return count;
//			dq.pop_front();
//			pq.pop();
//		}
//		else
//		{
//			dq.push_back(dq.front());
//			dq.pop_front();
//		}
//	}
//
//	return answer;
//}
//
////int main()
////{
////	vector<int> v = { 2,1,3,2 };
////	int i = 2;
////	solution(v, i);
////}