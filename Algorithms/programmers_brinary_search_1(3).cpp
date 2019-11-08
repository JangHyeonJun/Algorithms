//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//int get_sum(vector<int> budgets, int budget)
//{
//	int sum = 0;
//	for (int n : budgets)
//		if (n < budget)
//			sum += n;
//		else
//			sum += budget;
//	return sum;
//}
//
//int solution(vector<int> budgets, int M) {
//	sort(budgets.begin(), budgets.end());
//
//	int low = 1;
//	int high = budgets.back();
//	while (low <= high)
//	{
//		int mid = (high + low) / 2;
//		int sum = get_sum(budgets, mid);
//		if (sum < M)
//			low = mid + 1;
//		else if (sum > M)
//			high = mid - 1;
//		else
//			return mid;
//	}
//
//	return high;
//}
//
//int main()
//{
//	vector<int> v = { 120, 110, 140, 150 };
//	vector<int> v2 = { 1,2,3,4,5,6,7,8,9,10 };
//	solution(v, 485);
//
//	return 0;
//}