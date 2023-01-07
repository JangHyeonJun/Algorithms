//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  int minPathSum(vector<vector<int>>& grid) {
//    int m = grid.size();
//    int n = grid[0].size();
//
//    for (int i = 0; i < m; i++)
//      for (int j = 0; j < n; j++)
//      {
//        int a = i > 0 ? grid[i - 1][j] : INT_MAX;
//        int b = j > 0 ? grid[i][j - 1] : INT_MAX;
//        if (a != INT_MAX || b != INT_MAX)
//          grid[i][j] += a < b ? a : b;
//      }
//
//    return grid[m - 1][n - 1];
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<vector<int>> v{ {1, 3, 1}, {1, 5, 1}, {4, 2, 1} };
//
//  s.minPathSum(v);
//}