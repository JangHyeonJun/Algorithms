#include <vector>

using namespace std;

// 풀이 1
//class Solution {
//private:
//    void initGrid(vector<vector<int>>& grid, vector<vector<int>>& mines)
//    {
//        for (int i = 0; i < mines.size(); i++)
//        {
//            int row = mines[i][0];
//            int col = mines[i][1];
//
//            grid[row][col] = 0;
//        }
//    }
//public:
//
//    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
//        vector<vector<int>> grid(n, vector<int>(n, 1));
//        initGrid(grid, mines);
//
//        int maxTiles = 1;
//        int rowTiles = 1;
//        int maxLen = 0;
//
//        bool finish;
//        do
//        {
//            finish = true;
//			for (int i = 0; i < n; i++)
//                for (int j = 0; j < n; j++)
//                {
//                    if (grid[i][j] < 0)
//                        continue;
//
//                    if (grid[i][j] >= maxTiles)
//                    {
//                        maxLen++;
//                        maxTiles += 4;
//                        finish = false;
//                    }
//
//					if (i - 1 > 0 && grid[i - 1][j] >= 1)
//						grid[i - 1][j]++;
//					if (i + 1 < n && grid[i + 1][j] >= 1)
//						grid[i + 1][j]++;
//					if (j - 1 > 0 && grid[i][j - 1] >= 1)
//						grid[i][j - 1]++;
//					if (j + 1 < n && grid[i][j + 1] >= 1)
//						grid[i][j + 1]++;
//                }
//
//            rowTiles += 4;
//        } while (!finish);
//
//        return maxLen;
//    }
//};


// O(n^3) 풀이

//class Solution {
//private:
//	int getAxisLen(vector<vector<int>>& grid, int row, int col)
//	{
//		size_t size = grid.size();
//		int len = 0;
//		while (true)
//		{
//			if (row - len < 0 || grid[row - len][col] == 0)
//				break;
//			if (row + len >= size || grid[row + len][col] == 0)
//				break;
//			if (col - len < 0 || grid[row][col - len] == 0)
//				break;
//			if (col + len >= size || grid[row][col + len] == 0)
//				break;
//			len++;
//		}
//
//		return len;
//	}
//
//	void initGrid(vector<vector<int>>& grid, vector<vector<int>>& mines)
//	{
//		for (int i = 0; i < mines.size(); i++)
//		{
//			int row = mines[i][0];
//			int col = mines[i][1];
//
//			grid[row][col] = 0;
//		}
//	}
//public:
//    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
//		vector<vector<int>> grid(n, vector<int>(n, 1));
//		initGrid(grid, mines);
//		int maxLen = 0;
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < n; j++)
//			{
//				int len = getAxisLen(grid, i, j);
//				if (len > maxLen)
//					maxLen = len;
//			}
//
//		return maxLen;
//    }
//};

int main()
{
    Solution s;
    vector<vector<int>> v = { {3, 0}, {3,3} };
    s.orderOfLargestPlusSign(5, v);

    return 0;
}