//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 0;
//	sort(people.begin(), people.end());
//	int i = 0;
//	int j = people.size() - 1;
//	while (i <= j)
//	{
//		if (people[i] + people[j] <= limit)
//			i++;
//		j--;
//		answer++;
//	}
//	return answer;
//}
//
//int main()
//{
//	solution({ 49, 49, 51, 52, 52 }, 100);
//	return 0;
//}
//
//
////// 시간 초과 버전
///*
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> people, int limit) {
//	int answer = 0;
//	vector<bool> boarding(people.size(), false);
//	sort(people.begin(), people.end());
//	for (int i = 0; i < people.size(); i++)
//	{
//		if (boarding[i])
//			continue;
//
//		boarding[i] = true;
//		for (int j = people.size() - 1; j > i; j--)
//		{
//			if (!boarding[j] && people[i] + people[j] <= limit)
//			{
//				boarding[j] = true;
//				break;
//			}
//		}
//
//		answer++;
//	}
//	return answer;
//}
//*/
//
//
////// 과거 풀이
///*
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
//*/