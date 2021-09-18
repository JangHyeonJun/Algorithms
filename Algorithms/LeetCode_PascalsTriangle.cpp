//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> generate(int numRows) {
//        vector<vector<int>> rows;
//
//        for (int i = 0; i < numRows; i++)
//        {
//            vector<int> cols(i + 1);
//            for (int j = 0; j <= i; j++)
//            {
//                if (i <= 0 || j <= 0 || j >= i)
//                    cols[j] = 1;
//                else
//                    cols[j] = rows[i - 1][j - 1] + rows[i - 1][j];
//            }
//            rows.push_back(cols);
//        }
//
//        return rows;
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto a = s.generate(5);
//    return 0;
//}