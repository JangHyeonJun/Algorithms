//#include <iostream>
//#include <vector>
//#include <deque>
//
//using namespace std;
//
//class Solution {
//public:
//    int thirdMax(vector<int>& nums) {
//        deque<int> dq;
//        dq.push_front(nums[0]);
//
//        for (int i = 1; i < nums.size(); i++)
//        {
//            if ((dq.size() > 1 && dq[1] == nums[i]) || nums[i] == dq.front() || nums[i] == dq.back())
//                continue;
//
//            if (dq.front() < nums[i])
//                dq.push_front(nums[i]);
//            else if (dq.back() < nums[i])
//            {
//                int temp;
//                while (dq.size() > 1 && dq.back() < nums[i])
//                {
//                    temp = dq.back();
//                    dq.pop_back();
//                }
//                dq.push_back(nums[i]);
//                dq.push_back(temp);
//            }
//            else
//                dq.push_back(nums[i]);
//
//            if (dq.size() > 3)
//                dq.pop_back();
//        }
//
//        if (dq.size() != 3)
//            return dq.front();
//
//        return dq.back();
//    }
//};
//
//int main()
//{
//    Solution s;
//    // [3,2,5,4,4,4,1,2,6]
//    // 3,4,3,2,3
//    s.thirdMax(vector<int>{3,4,3,2,3});
//}