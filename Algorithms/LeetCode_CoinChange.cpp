//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        if (amount == 0)
//            return 0;
//
//        vector<long long> v(amount + 1, 0);
//
//        for (auto n : coins)
//            if (n == amount)
//                return 1;
//            else if (n < amount)
//                v[n]++;
//
//        for (long long i = 1; i <= amount; i++)
//        {
//            if (v[i] == 0)
//                continue;
//
//            for (auto n : coins)
//            {
//                long long next = i + n;
//                if (next > amount)
//                    continue;
//
//                if (v[next] == 0)
//                    v[next] = v[i] + 1;
//                else
//                    v[next] = v[next] < v[i] + 1 ? v[next] : v[i] + 1;
//            }
//        }
//
//        return v[amount] != 0 ? v[amount] : -1;
//    }
//};