//#include <vector>
//
//using namespace std;
//
//class Solution {
//    vector<bool> flags;
//public:
//    int countPrimes(int n) {
//        int result = 0;
//        flags.resize(n + 1);
//
//        for (int i = 2; i < n; i++)
//        {
//            if (flags[i])
//                continue;
//            for (int j = 2; i * j < n; j++)
//            {
//                flags[i * j] = true;
//            }
//        }
//
//        for (int i = n - 1; i > 1; i--)
//            if (i > 1 && !flags[i])
//                result++;
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.countPrimes(23);
//}