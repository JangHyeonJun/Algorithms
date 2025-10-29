//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int head = 0, tail = numbers.size() - 1;
//        while (head < tail)
//        {
//            auto sum = numbers[head] + numbers[tail];
//            if (sum == target)
//                return { head + 1, tail + 1 };
//            else if (sum < target)
//                head++;
//            else
//                tail--;
//        }
//
//        return {-1, -1};
//    }
//};