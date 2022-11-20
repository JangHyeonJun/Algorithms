//#include <string>
//
//using namespace std;
//
//class Solution {
//private:
//    bool checkException(string haystack, string needle)
//    {
//        if (needle.length() > haystack.length())
//            return false;
//
//        return true;
//    }
//public:
//    int strStr(string haystack, string needle) {
//        if (checkException(haystack, needle) == false)
//            return -1;
//
//        auto max = haystack.length() - needle.length();
//        {
//        for (int i = 0; i <= max; i++)
//            bool equal = true;
//            for (int j = 0; j < needle.length(); j++)
//            {
//                if (haystack[i + j] != needle[j])
//                {
//                    equal = false;
//                    break;
//                }
//            }
//
//            if (equal)
//                return i;
//        }
//
//        return -1;
//    }
//};