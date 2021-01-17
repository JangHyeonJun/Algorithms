//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr) {
//        vector<int> newArr;
//        newArr.reserve(arr.size());
//
//        for (const auto& value : arr)
//        {
//            if (value == 0)
//            {
//                newArr.push_back(value);
//                if (newArr.size() == arr.size())
//                    break;
//                newArr.push_back(value);
//            }
//            else
//                newArr.push_back(value);
//
//            if (newArr.size() == arr.size())
//                break;
//        }
//
//        arr = newArr;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.duplicateZeros(vector<int>{ 1, 0, 1 });
//}