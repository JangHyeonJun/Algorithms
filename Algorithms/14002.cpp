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
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int> arr(N);
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	vector<int> sub_arr = lis_nlogn_arr(arr);
//	cout << sub_arr.size() << endl;
//	for (int n : sub_arr)
//		cout << n << ' ';
//	return 0;
//}