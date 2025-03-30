//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void rotate(vector<int>& nums, int k) {
//        int n = nums.size();
//        k %= n;
//        for (int i = 0; n > 0; i++)
//        {
//            int moveIndex = (k + i) % nums.size();
//            int moveNum = nums[i];
//            while (moveIndex != i)
//            {
//                int buffer = nums[moveIndex];
//                nums[moveIndex] = moveNum;
//                moveIndex = (moveIndex + k) % nums.size();
//                moveNum = buffer;
//                n--;
//            }
//        }
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector<int> v{ -1, -100, 3, 99 };
//    s.rotate(v, 2);
//}