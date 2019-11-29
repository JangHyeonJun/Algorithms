//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int max_num = 50000;
//vector<bool> prime(max_num + 1, true);
//
//void makePrime(int n)
//{
//	for (int i = 2; i <= n; i++)
//		if (prime[i])
//			for (int k = i*2; k <= n; k += i)
//				prime[k] = false;
//}
//
//int solution(vector<int> nums) {
//	int answer = 0;
//	makePrime(max_num);
//
//	vector<bool> comb(nums.size(), false);
//	comb[0] = comb[1] = comb[2] = true;
//	sort(comb.begin(), comb.end());
//
//	do
//	{
//		int sum = 0;
//		for (int i = 0; i < nums.size(); i++)
//			if (comb[i])
//				sum += nums[i];
//		if (prime[sum])
//			answer++;
//	} while (next_permutation(comb.begin(), comb.end()));
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 1,2,3,4 };
//	solution(v);
//}