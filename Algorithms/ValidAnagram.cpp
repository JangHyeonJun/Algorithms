//#include <vector>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        if (s.length() != t.length())
//            return false;
//
//        unordered_map<char, int> um;
//        for (int i = 0; i < s.size(); i++)
//        {
//            um[s[i]]++;
//            um[t[i]]--;
//        }
//
//        for (auto const& elem : um)
//            if (elem.second < 0)
//                return false;
//
//        return true;
//    }
//};
//
//int main()
//{
//    return 0;
//}