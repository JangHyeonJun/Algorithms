//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        unordered_map<short, short> um;
//        int move = 0;
//        for (int i = 0; i < nums.size(); i++)
//            if (um.contains(nums[i]) == false)
//            {
//                um[nums[i]] = 1;
//                nums[i - move] = nums[i];
//            }
//            else if (um[nums[i]] == 1)
//            {
//                um[nums[i]]++;
//                nums[i - move] = nums[i];
//            }
//            else
//                move++;
//
//        return nums.size() - move;
//    }
//};