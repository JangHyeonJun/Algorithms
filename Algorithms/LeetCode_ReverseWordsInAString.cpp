//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string reverseWords(string s) {
//        auto len = s.length();
//
//        auto iter = s.rbegin();
//
//        string result;
//
//        while (iter != s.rend())
//        {
//            if (*iter != ' ')
//            {
//                auto endWord = iter;
//                while (iter != s.rend() && *iter != ' ')
//                    iter++;
//                auto startWord = iter - 1;
//
//                if (result.length() > 0)
//                    result += ' ';
//
//                result += string(startWord.base() - 1, endWord.base());
//            }
//
//            if (iter != s.rend())
//                iter++;
//        }
//
//        return result;
//    }
//};