//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int zeroCount = 0;
//        long long allProduct = 1;
//        vector<int> result(nums.size(), 0);
//
//        for (auto n : nums)
//            if (n == 0)
//                zeroCount++;
//            else
//                allProduct *= n;
//
//        if (zeroCount > 1)
//            return result;
//        else if (zeroCount == 1)
//        {
//            auto index = distance(nums.begin(), find(nums.begin(), nums.end(), 0));
//            result[index] = allProduct;
//            return result;
//        }
//
//        for (int i = 0; i < nums.size(); i++)
//                result[i] = allProduct / nums[i];
//
//        return result;
//    }
//};