//#include <iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//        vector<int> v;
//        v.reserve(nums2.size());
//        unordered_map<int, int> um;
//        
//        for (auto const& num1 : nums1)
//        {
//            if (um.find(num1) == um.end())
//                um[num1] = 0;
//            um[num1]++;
//        }
//
//        for (auto const& num2 : nums2)
//        {
//            if (um.find(num2) != um.end() && um[num2] > 0)
//            {
//                um[num2]--;
//                v.push_back(num2);
//            }
//        }
//
//        return v;
//    }
//};
//
//int main()
//{
//
//}