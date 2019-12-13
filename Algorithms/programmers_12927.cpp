//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//long long solution(int n, vector<int> works) {
//	long long answer = 0;
//
//	int sum = 0;
//	for (int t : works)
//		sum += t;
//	if (sum <= n)
//		return 0;
//	
//	sort(works.begin(), works.end());
//	int max_num = works.back();
//	while (n > 0 || max_num <= 0)
//	{
//		auto iter = lower_bound(works.begin(), works.end(), max_num);
//		if (iter == works.end())
//			max_num--;
//		else
//		{
//			*iter = *iter - 1;
//			n--;
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
//	vector<int> v = { 4, 3, 3 };
//	solution(4, v);
//}