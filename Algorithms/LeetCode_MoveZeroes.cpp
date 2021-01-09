//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        int diff = 0;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (nums[i] == 0)
//                diff++;
//            else if (diff > 0)
//            {
//                nums[i - diff] = nums[i];
//                nums[i] = 0;
//            }
//        }
//    }
//};
//
//int main()
//{
//
//}