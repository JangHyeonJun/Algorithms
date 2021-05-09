//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        unordered_set<int> us;
//        for (auto const& num : nums)
//            if (!us.insert(num).second)
//                us.erase(num);
//
//        return *us.begin();
//    }
//};