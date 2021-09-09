//#include <vector>
//#include <random>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//    vector<int> defaultNums;
//    default_random_engine randomEngine;
//public:
//    Solution(vector<int>& nums) {
//        this->defaultNums = vector<int>(nums);
//    }
//
//    /** Resets the array to its original configuration and return it. */
//    vector<int> reset() {
//        return defaultNums;
//    }
//
//    /** Returns a random shuffling of the array. */
//    vector<int> shuffle() {
//        auto temp = vector<int>(defaultNums);
//        
//        std::shuffle(temp.begin(), temp.end(), randomEngine);
//        return temp;
//    }
//};
//
//int main()
//{
//    vector<int> v({ 1,2,3 });
//    Solution s(v);
//    auto a1 = s.shuffle();
//    auto a2 = s.reset();
//    auto a3 = s.shuffle();
//    auto a4 = s.shuffle();
//    return 0;
//}
//
///**
// * Your Solution object will be instantiated and called as such:
// * Solution* obj = new Solution(nums);
// * vector<int> param_1 = obj->reset();
// * vector<int> param_2 = obj->shuffle();
// */