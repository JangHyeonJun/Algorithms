//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isSubsequence(string s, string t) {
//
//        if (s.length() == 0)
//            return true;
//
//        int si = 0;
//        int ti = 0;
//
//        for (; ti < t.length(); ti++)
//        {
//            if (t[ti] == s[si])
//            {
//                si++;
//                if (si >= s.length())
//                    return true;
//            }
//        }
//
//        return false;
//    }
//};