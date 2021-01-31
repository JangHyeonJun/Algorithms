//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Solution {
//public:
//    string intToRoman(int num) {
//        string result;
//        vector<pair<int, char>> v;
//        v.push_back(pair<int, char>(1000, 'M'));
//        v.push_back(pair<int, char>(500, 'D'));
//        v.push_back(pair<int, char>(100, 'C'));
//        v.push_back(pair<int, char>(50, 'L'));
//        v.push_back(pair<int, char>(10, 'X'));
//        v.push_back(pair<int, char>(5, 'V'));
//        v.push_back(pair<int, char>(1, 'I'));
//
//        auto& iter = v.begin();
//
//        while (num > 0 && iter != v.end())
//        {
//            if (iter->first <= num)
//            {
//                result += iter->second;
//                num -= iter->first;
//            }
//            else
//                iter++;
//        }
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.intToRoman(4);
//}