//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> sortArrayByParity(vector<int>& A) {
//        int evenIndex = 0;
//        int oddIndex = 0;
//
//        
//
//        while (oddIndex < A.size())
//        {
//            while (oddIndex < A.size() && A[oddIndex] % 2 == 0)
//                oddIndex++;
//
//            evenIndex = oddIndex + 1;
//
//            while (evenIndex < A.size() && A[evenIndex] % 2 == 1)
//                evenIndex++;
//
//            if (oddIndex < A.size() && evenIndex < A.size())
//                Swap(A[oddIndex], A[evenIndex]);
//
//            oddIndex++;
//        }
//
//        return A;
//    }
//
//    void Swap(int& a, int& b)
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.sortArrayByParity(vector<int> {2});
//}