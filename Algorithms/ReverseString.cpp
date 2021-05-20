//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void reverseString(vector<char>& s) {
//        auto iter = s.begin();
//        auto iter_back = s.end() - 1;
//
//        while (iter < iter_back)
//            swap(*(iter++), *(iter_back--));
//    }
//
//    void swap(char& a, char& b)
//    {
//        char temp = a;
//        a = b;
//        b = temp;
//    }
//};