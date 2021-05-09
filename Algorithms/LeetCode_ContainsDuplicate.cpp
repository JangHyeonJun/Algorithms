//#include <iostream>
//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> us;
//
//        for (const int& num : nums)
//            if (!us.insert(num).second)
//                return true;
//        return false;
//    }
//};