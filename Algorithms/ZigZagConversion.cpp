//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows == 1)
//            return s;
//
//        string answer;
//        vector<vector<char>> v(numRows, vector<char>());
//        int row = 0;
//        int add = -1;
//        for (const auto& c : s)
//        {
//            v[row].push_back(c);
//            if (row % (numRows - 1) == 0)
//                add *= -1;
//            row += add;
//        }
//
//        for (const auto& subv : v)
//        {
//            for (const auto& c : subv)
//            {
//                answer += c;
//            }
//        }
//
//        return answer;
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout << s.convert("PAYPALISHIRING", 3);
//    cout << s.convert("PAYPALISHIRING", 4);
//
//}