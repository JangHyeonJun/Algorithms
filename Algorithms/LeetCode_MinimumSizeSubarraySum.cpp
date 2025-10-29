//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int minCount = 0, minHead = 0, minTail = 0;
//
//        int sum = nums[0], head = 0, tail = 0, count = 1;
//        while (true)
//        {
//            if (sum >= target)
//            {
//                if (sum - nums[head] >= target)
//                {
//                    sum -= nums[head];
//                    head++;
//                    count--;
//                }
//
//                if (minCount == 0 || count < minCount)
//                {
//                    minCount = count;
//                    minHead = head;
//                    minTail = tail;
//                }
//
//                sum -= nums[head];
//                head++;
//                count--;
//            }
//            else if (tail < nums.size() - 1)
//            {
//                tail++;
//                sum += nums[tail];
//                count++;
//            }
//            else
//                break;
//        }
//
//        return minCount;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1,1,7 };
//    s.minSubArrayLen(7, v);
//}