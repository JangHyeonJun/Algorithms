//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  vector<vector<int>> generateMatrix(int n) {
//    vector<vector<int>> matrix(n, vector<int>(n));
//
//    enum Arrow { RIGHT, LEFT, DOWN, UP };
//
//    int maxSize = n * n;
//
//    int row = 0, col = 0;
//    Arrow arrow = RIGHT; // right, down, left, up
//    for (int i = 0; i < maxSize; i++)
//    {
//      matrix[row][col] = i + 1;
//
//      switch (arrow)
//      {
//      case RIGHT:
//        if (col == n - 1 || matrix[row][col + 1] != 0)
//        {
//          arrow = DOWN;
//          row++;
//        }
//        else
//          col++;
//        break;
//
//      case DOWN:
//        if (row == n - 1 || matrix[row + 1][col] != 0)
//        {
//          arrow = LEFT;
//          col--;
//        }
//        else
//          row++;
//
//        break;
//      case LEFT:
//        if (col == 0 || matrix[row][col - 1] != 0)
//        {
//          arrow = UP;
//          row--;
//        }
//        else
//          col--;
//
//        break;
//      case UP:
//        if (row == 0 || matrix[row - 1][col] != 0)
//        {
//          arrow = RIGHT;
//          col++;
//        }
//        else
//          row--;
//
//        break;
//      }
//
//    }
//
//    return matrix;
//  }
//};
//
//int main()
//{
//  Solution s;
//  auto result = s.generateMatrix(3);
//}