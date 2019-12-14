//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> solution(int n, long long k)
//{
//	vector<int> answer;
//	vector<int> nums;
//	long long max_case = 1;
//	int multiply_num = 1;
//	for (; multiply_num < n; multiply_num++)
//		max_case *= multiply_num;
//	for (int i = 1; i <= n; i++)
//		nums.push_back(i);
//	multiply_num--;
//
//	while (!nums.empty())
//	{
//		if (k > max_case && multiply_num > 0)
//		{
//			long long quotient = k / max_case;
//			long long remainder = k % max_case;
//			if (remainder == 0)
//				quotient--;
//			auto iter = nums.begin() + quotient;
//			answer.push_back(*iter);
//			nums.erase(iter);
//			k -= quotient * max_case;
//		}
//		else
//		{
//			answer.push_back(nums.front());
//			nums.erase(nums.begin());
//		}
//		
//		if (multiply_num > 0)
//		{
//			max_case /= multiply_num;
//			multiply_num--;
//		}
//	}
//	return answer;
//}
//
//int main()
//{
//	solution(3, 4);
//}