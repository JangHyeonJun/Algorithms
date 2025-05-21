//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLastWord(string s) {
//        int result = 0;
//        for (auto it = s.rbegin(); it != s.rend(); it++)
//            if (*it != ' ')
//                result++;
//            else if (result > 0)
//                break;
//        return result;
//    }
//};