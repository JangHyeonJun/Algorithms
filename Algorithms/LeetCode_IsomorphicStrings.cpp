//#include <string>
//#include <unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    bool isIsomorphic(string s, string t) {
//        auto len = s.length();
//        unordered_map<char, int> startS, startT;
//        unordered_map<char, int> countS, countT;
//        for (int i = 0; i < len; i++)
//        {
//            if (!startS.contains(s[i]))
//            {
//                startS[s[i]] = i;
//                countS[s[i]] = 1;
//            }
//            else
//                countS[s[i]]++;
//
//
//            if (!startT.contains(t[i]))
//            {
//                startT[t[i]] = i;
//                countT[t[i]] = 1;
//            }
//            else
//                countT[t[i]]++;
//
//            if (startS[s[i]] != startT[t[i]] ||
//                countS[s[i]] != countT[t[i]])
//                return false;
//        }
//
//        return true;
//    }
//};