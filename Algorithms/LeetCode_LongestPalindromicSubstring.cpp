//#include <string>
//
//using namespace std;
//
//class Solution {
//private:
//    string getLongestEqualString(string::iterator iter1, string::iterator end1, string::reverse_iterator iter2, string::reverse_iterator end2)
//    {
//        string maxS, s;
//        while (iter1 != end1 && iter2 != end2)
//        {
//            if (*iter1 == *iter2)
//            {
//                s.push_back(*iter2);
//                if (s.length() > maxS.length())
//                    maxS = s;
//            }
//            else
//                s.clear();
//
//            iter1++;
//            iter2++;
//        }
//
//        return maxS;
//    }
//public:
//
//    string longestPalindrome(string s) {
//        string maxPalindrome, palindrome;
//        auto iter = s.begin();
//        auto riter = s.rbegin();
//
//        while (iter != s.end())
//        {
//            palindrome = getLongestEqualString(iter++, s.end(), s.rbegin(), s.rend());
//            if (palindrome.length() > maxPalindrome.length())
//                maxPalindrome = palindrome;
//
//            palindrome = getLongestEqualString(s.begin(), s.end(), riter++, s.rend());
//            if (palindrome.length() > maxPalindrome.length())
//                maxPalindrome = palindrome;
//        }
//
//        return maxPalindrome;
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto result = s.longestPalindrome("aacabdkacaa");
//
//    return 0;
//}