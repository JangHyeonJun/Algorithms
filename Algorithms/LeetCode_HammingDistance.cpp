//class Solution {
//public:
//    int hammingDistance(int x, int y) {
//        int diff = x ^ y;
//        int count = 0;
//        for (int i = 0; i < 32; i++)
//            if (diff & 1 << i)
//                count++;
//        return count;
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto answer = s.hammingDistance(1, 4);
//    return 0;
//}