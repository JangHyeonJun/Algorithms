//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct Compare
//{
//	bool operator()(const vector<int>& a, const vector<int>& b)
//	{
//		return a[0] < b[0];
//	}
//};
//
//int solution(vector<vector<int>> jobs) {
//	int answer = 0;
//	int size = jobs.size();
//	sort(jobs.begin(), jobs.end(), Compare());
//	auto iter = jobs.begin();
//	int time = (*iter)[0];
//	int wait = 0;
//
//	while (iter != jobs.end())
//	{
//		auto sub_iter = iter;
//		int min = 2147483647;
//		while (sub_iter != jobs.end() && (*sub_iter)[0] <= time)
//		{
//			if ((*sub_iter)[1] < min)
//			{
//				min = (*sub_iter)[1];
//				iter = sub_iter;
//			}
//			sub_iter++;
//		}
//		if (time <= (*iter)[0])
//			time = (*iter)[0];
//		
//		wait += time - (*iter)[0] + (*iter)[1];
//		time += (*iter)[1];
//
//		jobs.erase(iter);
//		if (jobs.empty())
//			break;
//		else
//			iter = jobs.begin();
//	}
//	answer = wait / size;
//	return answer;
//}
