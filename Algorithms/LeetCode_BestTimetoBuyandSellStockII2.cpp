//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int profit = 0;
//        int start = prices[0], end = prices[0];
//
//        for (int i = 1; i < prices.size(); i++)
//        {
//            if (prices[i] < end)
//            {
//                profit += max(end - start, 0);
//                start = end = prices[i];
//            }
//            else
//                end = prices[i];
//        }
//
//        profit += max(end - start, 0);
//        return profit;
//    }
//};