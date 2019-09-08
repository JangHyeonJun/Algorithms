//#include <string>
//#include <vector>
//#include <algorithm>
//#include <deque>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 1;
//	deque<int> dq;
//	sort(people.begin(), people.end());
//	for (int i = 0; i < people.size(); i++)
//		dq.push_back(people[i]);
//	int weight = 0;
//	int seat = 0;
//	while (!dq.empty())
//	{
//		if ( dq.size() > 1 && dq.front() + dq.back() <= limit)
//		{
//			answer++;
//			dq.pop_front();
//			dq.pop_back();
//		}
//		else
//		{
//			weight += dq.back();
//			seat++;
//			if (weight > limit || seat > 2)
//			{
//				weight = dq.back();
//				seat = 1;
//				answer++;
//			}
//			dq.pop_back();
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 40, 40, 40 };
//	solution(v, 140);
//}