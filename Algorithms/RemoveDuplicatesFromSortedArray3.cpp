//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int curr = -987654321;
//        int k = 0;
//		for (int i = 0; i < nums.size(); i++)
//        {
//            int n = nums[i];
//            if (n > curr)
//            {
//                nums[k] = n;
//                curr = n;
//                k++;
//            }
//        }
//
//        return k;
//    }
//};