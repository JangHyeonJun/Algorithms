//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> budgets, int M) {
//	int answer = 0;
//	sort(budgets.begin(), budgets.end());
//	int min = M / budgets.size();
//	long long sub_sum = 0;
//
//	int i = 0;
//	while (i < budgets.size() && budgets[i] <= min)
//	{
//		sub_sum += budgets[i];
//		i++;
//	}
//
//	int remain_num = budgets.size() - i;
//	M -= sub_sum;
//
//	if (remain_num > 0)
//		answer = M / remain_num;
//	else
//		answer = min;
//
//	if (answer > *(budgets.end() - 1))
//		answer = *(budgets.end() - 1);
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = {1, 1, 1, 5, 5, 5 };
//	//for (int i = 0; i < 99999; i++)
//	//	v.push_back(1);
//	solution(v, 17);
//}