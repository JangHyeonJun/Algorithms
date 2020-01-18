//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int maximumToys(vector<int> prices, int k) {
//	int toys = 0;
//	sort(prices.begin(), prices.end());
//	for (int i = 0; i < prices.size(); i++)
//	{
//		if (prices[i] < k)
//		{
//			k -= prices[i];
//			toys++;
//		}
//		else
//			break;
//	}
//
//	return toys;
//}
//
//
//int main()
//{
//	vector<int> v = { 1, 12, 5, 111, 200, 1000, 10 };
//	maximumToys(v, 50);
//	return 0;
//}