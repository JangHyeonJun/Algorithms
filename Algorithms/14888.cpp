//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> results;
//
//
//void calculate(vector<int> nums, vector<int> opers, int count, int result)
//{
//	if (count == nums.size())
//	{
//		results.push_back(result);
//		return;
//	}
//
//	if (opers[0] > 0) // +, -, *, /
//	{
//		int temp = result + nums[count];
//		count++;
//		opers[0]--;
//		calculate(nums, opers, count, temp);
//		opers[0]++;
//		count--;
//	}
//	if (opers[1] > 0)
//	{
//		int temp = result - nums[count];
//		count++;
//		opers[1]--;
//		calculate(nums, opers, count, temp);
//		opers[1]++;
//		count--;
//	}
//	if (opers[2] > 0)
//	{
//		int temp = result * nums[count];
//		count++;
//		opers[2]--;
//		calculate(nums, opers, count, temp);
//		opers[2]++;
//		count--;
//	}
//	if (opers[3] > 0)
//	{
//		int temp = result / nums[count];
//		count++;
//		opers[3]--;
//		calculate(nums, opers, count, temp);
//		opers[3]++;
//		count--;
//	}
//}
//
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> nums(N);
//	vector<int> opers(4, 0);
//	for (int i = 0; i < N; i++)
//		cin >> nums[i];
//	for (int i = 0; i < 4; i++)
//		cin >> opers[i];
//
//	calculate(nums, opers, 1, nums[0]);
//	sort(results.begin(), results.end());
//
//	cout << results.back() << '\n' << results.front();
//	
//	return 0;
//}