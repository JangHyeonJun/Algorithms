//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        vector<int> accum(nums.size() + 1), reverse(nums.size() + 1);
//        accum[0] = reverse[0] = 0;
//
//        for (int i = 0; i < nums.size(); i++)
//        {
//            accum[i + 1] = accum[i] + nums[i];
//            reverse[i + 1] = reverse[i] + nums[nums.size() - i - 1];
//        }
//
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (accum[i] == reverse[nums.size() - i - 1])
//                return i;
//        }
//
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 2,1,-1 };
//    s.pivotIndex(v);
//}