//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        int i = 0;
//        int j = nums.size() - 1;
//        while(i <= j)
//        {
//            if (nums[i] == val)
//            {
//                if (nums[j] == val)
//                {
//                    j--;
//                }
//                else
//                {
//                    swap(nums[i], nums[j]);
//                    i++;
//                    j--;
//                }
//            }
//            else
//            {
//                i++;
//            }
//        }
//
//        return i;
//    }
//
//    void swap(int& num1, int& num2)
//    {
//        int tmp = num1;
//        num1 = num2;
//        num2 = tmp;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.removeElement(vector<int>{3, 2, 2, 3}, 3);
//}