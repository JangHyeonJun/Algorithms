//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int lis_n2_max(vector<int> arr)
//{
//	vector<int> sub_arr(arr.size(), 0);
//	sub_arr[0] = arr.front();
//	int max = arr.front();
//	for (int i = 1; i < arr.size(); i++)
//	{
//		int curr_max = 0;
//		for (int j = 0; j < i; j++)
//			if (arr[i] > arr[j] && curr_max < sub_arr[j])
//				curr_max = sub_arr[j];
//		sub_arr[i] = curr_max + arr[i];
//		if (max < sub_arr[i])
//			max = sub_arr[i];
//	}
//
//	return max;
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
//	cout << lis_n2_max(arr);
//	return 0;
//}