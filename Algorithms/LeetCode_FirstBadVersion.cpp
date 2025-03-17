//// The API isBadVersion is defined for you.
// static bool isBadVersion(int version)
// {
//     return version == 1;
// }
//
//class Solution {
//public:
//    int firstBadVersion(int n) {
//        
//        long long l = 1;
//        long long r = n;
//        long long c = (l + r) / 2;
//
//        while (l != r)
//        {
//
//            if (isBadVersion(c))
//                r = c;
//            else 
//                l = c + 1;
//            c = (l + r) / 2;
//        }
//
//        return c;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.firstBadVersion(1);
//}