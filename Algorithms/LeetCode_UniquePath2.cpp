#include <vector>

using namespace std;

class Solution {
public:
  int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();

    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        if (obstacleGrid[i][j] == 1)
          obstacleGrid[i][j] = -1;

    for (int i = 0; i < m; i++)
      if (obstacleGrid[i][0] != -1)
        obstacleGrid[i][0] = 1;
      else
        break;

    for (int i = 0; i < n; i++)
      if (obstacleGrid[0][i] != -1)
        obstacleGrid[0][i] = 1;
      else
        break;

    for (int i = 1; i < m; i++)
      for (int j = 1; j < n; j++)
        if (obstacleGrid[i][j] != -1)
        {
          int a = obstacleGrid[i][j - 1] == -1 ? 0 : obstacleGrid[i][j - 1];
          int b = obstacleGrid[i - 1][j] == -1 ? 0 : obstacleGrid[i - 1][j];
          obstacleGrid[i][j] = a + b;
        }

    return obstacleGrid[m - 1][n - 1] == -1 ? 0 : obstacleGrid[m - 1][n - 1];
  }
};

int main()
{
  Solution s;
  vector<vector<int>> v{ {0}, {0} };
  s.uniquePathsWithObstacles(v);
}