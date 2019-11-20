//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> lis_nlogn_arr(vector<int> arr)
//{
//	vector<int> sub_arr;
//	vector<int> sub_len;
//	sub_arr.push_back(arr.front());
//	sub_len.push_back(1);
//	for (int i = 1; i < arr.size(); i++)
//	{
//		if (sub_arr.back() < arr[i])
//		{
//			sub_arr.push_back(arr[i]);
//			sub_len.push_back(sub_arr.size());
//		}
//		else
//		{
//			auto iter = lower_bound(sub_arr.begin(), sub_arr.end(), arr[i]);
//			*iter = arr[i];
//			sub_len.push_back(iter - sub_arr.begin() + 1);
//		}
//	}
//
//
//	int size = sub_arr.size();
//	int i = arr.size() - 1;
//	vector<int> result_arr(size);
//	while (size > 0 && i >= 0)
//	{
//		if (sub_len[i] == size)
//		{
//			result_arr[size - 1] = arr[i];
//			size--;
//		}
//		i--;
//	}
//
//	return result_arr;
//}
//
//int lis_nlogn(vector<int> arr)
//{
//	vector<int> sub_arr;
//	sub_arr.push_back(arr.front());
//	for (int i = 1; i < arr.size(); i++)
//	{
//		if (sub_arr.back() < arr[i])
//			sub_arr.push_back(arr[i]);
//		else
//		{
//			auto iter = lower_bound(sub_arr.begin(), sub_arr.end(), arr[i]);
//			*iter = arr[i];
//		}
//	}
//
//	return sub_arr.size();
//}
//
//int lis_n2(vector<int> arr)
//{
//	vector<int> dp(arr.size(), 0);
//	int max = 0;
//	for (int i = 0; i < arr.size(); i++)
//	{
//		int len = 1;
//		for (int j = 0; j < i; j++)
//			if (len <= dp[j] && arr[i] > arr[j])
//				len = dp[j] + 1;
//		dp[i] = len;
//		if (len > max)
//			max = len;
//	}
//	return max;
//}
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> arr(N);
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	cout << lis_nlogn(arr);
//	return 0;
//}