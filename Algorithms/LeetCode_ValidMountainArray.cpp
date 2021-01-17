//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool validMountainArray(vector<int>& arr) {
//        bool isIncreasing = false;
//        bool isDecreasing = false;
//        for (int i = 1; i < arr.size(); i++)
//        {
//            if (arr[i - 1] < arr[i])
//            {
//                isIncreasing = true;
//                if (isDecreasing)
//                    return false;
//            }
//            else if (arr[i - 1] > arr[i])
//            {
//                isDecreasing = true;
//            }
//            else
//                return false;
//        }
//        
//        return isIncreasing && isDecreasing;
//    }
//};
//
//int main()
//{
//
//}