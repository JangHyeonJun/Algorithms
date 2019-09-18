//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int find(vector<int> weight)
//{
//	int subSum = 0;
//
//	for (int i = 0; i < weight.size(); i++)
//	{
//		if (weight[i] > subSum + 1)
//			break;
//		subSum += weight[i];
//	}
//	return subSum + 1;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> weight(n);
//	for (int i = 0; i < n; i++)
//	{
//		int input;
//		cin >> input;
//		weight[i] = input;
//	}
//	sort(weight.begin(), weight.end());
//	cout << find(weight);
//	return 0;
//}