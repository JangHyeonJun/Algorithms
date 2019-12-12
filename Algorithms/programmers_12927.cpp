//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//long long solution(int n, vector<int> works) {
//	long long answer = 0;
//	sort(works.begin(), works.end(), greater<int>());
//	auto iter = works.begin();
//	while (n > 0)
//	{
//		if (iter == works.end() - 1)
//		{
//			if (*iter == 0)
//				break;
//			*iter = *iter - 1;
//			n--;
//			iter = works.begin();
//		}
//		else
//		{
//			if (*iter >= *(iter + 1) && *iter > 0)
//			{
//				*iter = *iter - 1;
//				n--;
//			}
//			else
//				iter++;
//		}
//	}
//
//	for (int i = 0; i < works.size(); i++)
//		answer += (long long)works[i] * works[i];
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 4,3,3 };
//	solution(4, v);
//}