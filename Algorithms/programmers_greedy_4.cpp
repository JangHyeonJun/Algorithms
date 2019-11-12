//#include <string>
//#include <vector>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 0;
//	deque<int> dq;
//	sort(people.begin(), people.end());
//	for (int n : people)
//		dq.push_back(n);
//
//	while (!dq.empty())
//	{
//		if(dq.size() >= 2 && dq.front() + dq.back() <= limit)
//		{
//			dq.pop_front();
//			dq.pop_back();
//			answer++;
//		}
//		else
//		{
//			dq.pop_back();
//			answer++;
//		}
//	}
//
//	return answer;
//}