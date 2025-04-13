//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//
//        auto size = nums.size();
//        int answer = 0;
//        int maxIndex = nums[0];
//
//        int i = 0;
//        while(i < size && size > 1)
//        {
//            int tmpMax = maxIndex;
//            for (; i < size && i <= tmpMax; i++)
//                maxIndex = max(nums[i] + i, maxIndex);
//
//            answer++;
//        }
//
//        return answer;
//    }
//};
//
//int main()
//{
//    Solution s;
//
//    vector<int> v{ 2, 1, 1, 0 };
//    s.jump(v);
//}