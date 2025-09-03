//#include <string>
//#include <iostream>
//using namespace std;
//
//class Solution {
//private:
//    bool isValidChar(char c) {
//        if ((c >= '0' && c <= '9') ||
//            (c >= 'A' && c <= 'Z') ||
//            (c >= 'a' && c <= 'z'))
//            return true;
//
//        return false;
//    }
//
//    char toLower(char c) {
//        if (c >= 'A' && c <= 'Z')
//            return c + 32;
//
//        return c;
//    }
//public:
//    bool isPalindrome(string s) {
//        int min = '0';
//        int max = 'z';
//        int curr = 0;
//        
//        // convert lower case
//        for (int i = 0; i < s.length(); i++)
//        {
//            if (isValidChar(s[i]))
//            {
//                s[curr] = toLower(s[i]);
//                curr++;
//            }
//        }
//
//        s.resize(curr);
//        cout << s << endl;
//
//        // check palindrome
//        for (int i = 0; i < s.length() / 2; i++)
//        {
//            if (s[i] != s[s.length() - i - 1])
//                return false;
//        }
//
//        return true;
//    }
//};