//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
///*
//뒤에서 부터 채우면 불필요한 것들이 많이 줄어듬
//*/
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        m -= 1;
//        n -= 1;
//        for (int i = nums1.size() - 1; i >= 0 ; i--)
//        {
//            if (n < 0)
//                nums1[i] = nums1[m--];
//            else if (m < 0)
//                nums1[i] = nums2[n--];
//            else
//                nums1[i] = nums1[m] > nums2[n] ? nums1[m--] : nums2[n--];
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 0, 1, 0, 0, 0 };
//    vector<int> v2{ 0, 0, 2 };
//    s.merge(v, 2, v2, 3);
//}