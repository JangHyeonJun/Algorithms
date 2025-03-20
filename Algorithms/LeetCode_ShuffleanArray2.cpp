//#include <vector>
//#include <random>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//private:
//    vector<int> _init,  _nums;
//    mt19937 gen;
//public:
//    Solution(vector<int>& nums) {
//        _init = nums;
//        _nums = nums;
//        gen = mt19937(random_device{}());
//    }
//
//    vector<int> reset() {
//        _nums = _init;
//        return _init;
//    }
//
//    vector<int> shuffle() {
//        for (int i = 0; i < _nums.size(); i++)
//        {
//            uniform_int_distribution<int> dist(i, _nums.size() - 1);
//            auto randomIndex = dist(gen);
//            swap(_nums[i], _nums[randomIndex]);
//        }
//
//        return _nums;
//    }
//};
//
///**
// * Your Solution object will be instantiated and called as such:
// * Solution* obj = new Solution(nums);
// * vector<int> param_1 = obj->reset();
// * vector<int> param_2 = obj->shuffle();
// */