//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> budgets, int M) {
//	sort(budgets.begin(), budgets.end());
//	int curr_budget = 0;
//	int over_index = 0;
//	int N = 0;
//
//	auto a = upper_bound(budgets.begin(), budgets.end(), 110 - 1);
//
//	while (curr_budget + budgets.size() - over_index <= M)
//	{
//		while (over_index < budgets.size() && budgets[over_index] <= N)
//			over_index++;
//
//		if (over_index >= budgets.size())
//			break;
//
//		curr_budget += budgets.size() - over_index;
//		N++;
//	}
//
//	return N;
//}
//
//int main()
//{
//	vector<int> v = { 120, 110, 140, 150 };
//	vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
//	solution(v2, 56);
//
//	return 0;
//}