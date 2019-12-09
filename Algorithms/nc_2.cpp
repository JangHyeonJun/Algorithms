//#include<vector>
//using namespace std;
//
//int solution(vector<int> A, int S)
//{
//	int answer = A.size();
//	vector<int> dp(A.size(), -1);
//
//	int prev = 0;
//	int curr_sum = 0;
//	for (int i = 0; i < A.size(); i++)
//	{
//		curr_sum += A[i];
//		if (curr_sum >= S)
//		{
//			dp[prev] = i - prev + 1;
//			curr_sum -= A[prev];
//			if (dp[prev] < answer)
//				answer = dp[prev];
//			prev++;
//		}
//	}
//	prev = A.size() - 1;
//	curr_sum = 0;
//	for (int i = A.size()-1; i >= 0; i--)
//	{
//		curr_sum += A[i];
//		if (curr_sum >= S && prev >= 0)
//		{
//			int temp_dp = prev - i + 1;
//			if(temp_dp < dp[prev] || dp[prev] == -1)
//				dp[prev] = prev - i + 1;
//			curr_sum -= A[prev];
//			if (dp[prev] < answer)
//				answer = dp[prev];
//			prev--;
//		}
//	}
//
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 1,10,2,9,3,8,4,7,5,6 };
//	vector<int> v2 = { 0,0,0,0 };
//	solution(v2, 0);
//}