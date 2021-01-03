//#include <iostream>
//#include <vector>
//#include <bitset>
//
//using namespace std;
//
//class Solution {
//public:
//    bool checkIfExist(vector<int>& arr) {
//        const size_t max = 10 * 10 * 10;
//        const size_t size = max * 8;
//
//        bitset<size> set;
//        bool hasZero = false;
//
//        for (const auto& num : arr)
//        {
//            if (num == 0 && !hasZero)
//            {
//                hasZero = true;
//                continue;
//            }
//
//            auto index = num + max * 2;
//            set[index] = true;
//        }
//
//        for (const auto& num : arr)
//        {
//            auto doubleIndex = num * 2 + max * 2;
//            if (set[doubleIndex])
//                return true;
//        }
//
//        return false;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.checkIfExist(vector<int>{10, 2, 5, 3});
//}