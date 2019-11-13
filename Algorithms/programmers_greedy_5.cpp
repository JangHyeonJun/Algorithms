//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<vector<int>> routes) {
//	int answer = 0;
//	sort(routes.begin(), routes.end());
//	while (!routes.empty())
//	{
//		auto iter = routes.begin();
//		int min = (*iter)[0];
//		int max = (*iter)[1];
//		iter = routes.erase(iter);
//		while (iter != routes.end())
//		{
//			if ((*iter)[0] <= max && (*iter)[1] >= min)
//			{
//				min = min > (*iter)[0] ? min : (*iter)[0];
//				max = max < (*iter)[1] ? max : (*iter)[1];
//				iter = routes.erase(iter);
//			}
//			else
//				iter++;
//		}
//		answer++;
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {-20, 15}, {-14, -5}, {-18, -13}, {-5, -3} };
//	vector<vector<int>> v2 = { {1,2},{2,3},{3,4},{0,2},{-10,2} };
//	solution(v2);
//	return 0;
//}