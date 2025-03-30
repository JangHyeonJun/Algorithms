//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        unordered_set<short> us;
//        int move = 0;
//
//        for (int i = 0; i < nums.size(); i++)
//            if (us.contains(nums[i]) == false)
//            {
//                us.insert(nums[i]);
//                nums[i - move] = nums[i];
//            }
//            else
//                move++;
//
//        return nums.size() - move;
//    }
//};