//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  void setZeroes(vector<vector<int>>& matrix) {
//    vector<bool> rows(matrix.size());
//    vector<bool> cols(matrix[0].size());
//
//    for (int i = 0; i < matrix.size(); i++)
//      for (int j = 0; j < matrix[0].size(); j++)
//        if (matrix[i][j] == 0)
//          rows[i] = cols[j] = true;
//
//
//    for (int i = 0; i < matrix.size(); i++)
//      for (int j = 0; j < matrix[0].size(); j++)
//        if (rows[i] || cols[j])
//          matrix[i][j] = 0;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<vector<int>> v{ {1,1,1}, {1,0,1}, {1,1,1} };
//  s.setZeroes(v);
//}