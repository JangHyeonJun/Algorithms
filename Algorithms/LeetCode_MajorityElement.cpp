//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int, int> um;
//        int maxCount = 0;
//        int maxNum = 0;
//
//        for (auto n : nums)
//        {
//            if (um.contains(n) == false)
//                um[n] = 1;
//            else
//                um[n]++;
//
//            if (um[n] > maxCount)
//            {
//                maxCount = um[n];
//                maxNum = n;
//            }
//        }
//
//        return maxNum;
//    }
//};

// NOTE: 무조건 과반수 이상이라는 조건이 있기때문에
// maxCount 하나만 가지고도 풀수있다.
// 후보일경우 count를 늘리고
// 아닐경우 count를 줄여서
// count가 1이상인 i가 정답이 된다. ㅎㄷㄷㄷ;