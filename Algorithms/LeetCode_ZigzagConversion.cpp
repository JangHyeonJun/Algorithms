//#include <string>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if (numRows == 1)
//            return s;
//        
//        vector<string> rows(numRows);
//
//        auto iter = s.begin();
//        int row = 0;
//        bool upper = true;
//
//        while (iter != s.end())
//        {
//            rows[row] += *iter;
//            row = upper ? row + 1 : row - 1;
//            if (row == numRows - 1)
//                upper = false;
//            else if (row == 0)
//                upper = true;
//
//            iter++;
//        }
//
//        return join(rows);
//    }
//
//private:
//    string join(const vector<string>& v)
//    {
//        string result;
//
//        for (const auto& s : v)
//            result += s;
//
//        return result;
//    }
//};
