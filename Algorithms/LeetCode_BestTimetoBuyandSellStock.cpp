//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int min = prices[0];
//        int profit = 0;
//
//        for (auto const& price : prices)
//        {
//            if (price < min)
//                min = price;
//            if (profit < price - min)
//                profit = price - min;
//        }
//
//        return profit;
//    }
//};