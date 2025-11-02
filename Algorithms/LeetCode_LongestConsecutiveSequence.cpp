//#include <vector>
//#include <unordered_set>
//using namespace std;
//
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        unordered_set<int> us;
//        int min = 987654321;
//        int result = 0;
//
//        for (auto n : nums)
//            us.insert(n);
//
//        for (auto n : us)
//        {
//            if (us.contains(n - 1))
//                continue;
//
//            int count = 0;
//            while (us.contains(n++))
//                count++;
//
//            if (count > result)
//                result = count;
//        }
//
//        return result;
//    }
//};