//#include <string>
//#include <vector>
//#include <algorithm>
//#include <set>
//using namespace std;
//const int max_num = 10000000;
//bool dp[max_num];
//
//
//int countPrimeNum(set<int, greater<int>> num_set)
//{
//	int count = 0;
//
//	for (int n : num_set)
//		if (dp[n])
//			count++;
//
//	return count;
//}
//
//void makePrime(int n)
//{
//	dp[0] = false;
//	dp[1] = false;
//	for (int i = 2; i <= n; i++)
//		dp[i] = true;
//
//
//	for (int i = 2; i <= n; i++)
//	{
//		if (dp[i])
//		{
//			for (int j = i * 2; j <= n; j += i)
//				dp[j] = false;
//		}
//	}
//}
//
//set<int, greater<int>> makeNumSet(string numbers)
//{
//	vector<int> nums;
//	set<int, greater<int>> combination;
//	for (int i = 0; i < numbers.size(); i++)
//		nums.push_back(numbers[i] - 48);
//
//	do
//	{
//		string num = "";
//		for (int i = 0; i < nums.size(); i++)
//		{
//			num += to_string(nums[i]);
//			combination.insert(atoi(num.c_str()));
//		}
//	} while (next_permutation(nums.begin(), nums.end()));
//
//	return combination;
//}
//
//int solution(string numbers) {
//	set<int, greater<int>> num_set = makeNumSet(numbers);
//	makePrime(*num_set.begin());
//
//	return countPrimeNum(num_set);
//}
//
//int main()
//{
//	string s = "0";
//	solution(s);
//
//	return 0;
//}