//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> budgets, int M) {
//	sort(budgets.begin(), budgets.end());
//	int curr_budget = 0;
//	int over_num = 0;
//	int N = 0;
//
//	auto a = upper_bound(budgets.begin(), budgets.end(), 110 - 1);
//
//	int sum = 0;
//	for (int n : budgets)
//		sum += n;
//	if (sum <= M)
//		return *(budgets.end() - 1);
//
//
//	while (curr_budget + over_num <= M)
//	{
//		over_num = budgets.end() - upper_bound(budgets.begin(), budgets.end(), N);
//		if (over_num < 1)
//			break;
//		curr_budget += over_num;
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