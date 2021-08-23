//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <stack>
//using namespace std;
//
//class Puzzle
//{
//public:
//    int tileCount;
//    vector<vector<int>> rectangularTile;
//};
//
//bool IsEqualTile(vector<vector<int>>& r1, vector<vector<int>> r2)
//{
//    size_t height = r1.size();
//    size_t width = r1[0].size();
//
//    bool isRotated = height == r2.size() ? false : true;
//
//    if (!isRotated && width != r2[0].size())
//        return false;
//    else if (isRotated && height != r2.size())
//        return false;
//
//    for (int i = 0; i < height; i++)
//    {
//        for (int j = 0; j < width; j++)
//        {
//            if (isRotated && r1[i][j] != r2[j][i])
//                return false;
//            else if (!isRotated && r1[i][j] != r2[i][j])
//                return false;
//        }
//    }
//
//    return true;
//}
//
//
//vector<vector<int>> MakeRectangularTile(
//    vector<vector<int>>& table, int row, int col, int width, int height, bool reverse)
//{
//    vector<vector<int>> rectangularTile(height, vector<int>(width, 0));
//
//    for (int i = 0; i < height; i++)
//        for (int j = 0; j < width; j++)
//            if (reverse)
//                rectangularTile[i][j] = !table[row + i][col + j];
//            else
//                rectangularTile[i][j] = table[row + i][col + j];
//
//    return rectangularTile;
//}
//
//void FindTiles(vector<vector<int>>& table,
//    unordered_multimap<int, vector<vector<int>>>& tileMap)
//{
//    size_t len = table.size();
//    vector<vector<bool>> visited(len, vector<bool>(len, false));
//
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = 0; j < len; j++)
//        {
//            if (!visited[i][j])
//            {
//                visited[i][j] = true;
//
//                int tileCount = 0;
//                int minRow, minCol, maxRow, maxCol;
//                minRow = maxRow = i;
//                minCol = maxCol = j;
//
//                if (table[i][j])
//                {
//                    stack<pair<int, int>> s;
//                    s.push(make_pair(i, j));
//
//                    while (!s.empty())
//                    {
//                        auto pos = s.top();
//                        s.pop();
//                        visited[pos.first][pos.second] = true;
//                        tileCount++;
//
//                        if (pos.first < minRow)
//                            minRow = pos.first;
//                        if (pos.first > maxRow)
//                            maxRow = pos.first;
//                        if (pos.second < minCol)
//                            minCol = pos.second;
//                        if (pos.second > maxCol)
//                            maxCol = pos.second;
//
//                        if (pos.second - 1 >= 0 && table[pos.first][pos.second - 1] && !visited[pos.first][pos.second - 1])
//                            s.push(make_pair(pos.first, pos.second - 1));
//                        if (pos.second + 1 < len && table[pos.first][pos.second + 1] && !visited[pos.first][pos.second + 1])
//                            s.push(make_pair(pos.first, pos.second + 1));
//                        if (pos.first - 1 >= 0 && table[pos.first - 1][pos.second] && !visited[pos.first - 1][pos.second])
//                            s.push(make_pair(pos.first - 1, pos.second));
//                        if (pos.first + 1 < len && table[pos.first + 1][pos.second] && !visited[pos.first + 1][pos.second])
//                            s.push(make_pair(pos.first + 1, pos.second));
//                    }
//
//                    int width = maxCol - minCol + 1;
//                    int height = maxRow - minRow + 1;
//                    auto rectangularTile = MakeRectangularTile(table, i, j, width, height, false);
//
//                    tileMap.insert(make_pair(tileCount, rectangularTile));
//                }
//            }
//        }
//    }
//}
//
//int FillEmptyBoard(vector<vector<int>>& gameBoard, unordered_multimap<int, vector<vector<int>>>& tileMap)
//{
//    int fillCount = 0;
//    size_t len = gameBoard.size();
//    vector<vector<bool>> visited(len, vector<bool>(len, false));
//    for (int i = 0; i < len; i++)
//    {
//        for (int j = 0; j < len; j++)
//        {
//            if (!visited[i][j])
//            {
//                visited[i][j] = true;
//
//                int tileCount = 0;
//                int minRow, minCol, maxRow, maxCol;
//                minRow = maxRow = i;
//                minCol = maxCol = j;
//
//                if (!gameBoard[i][j])
//                {
//                    stack<pair<int, int>> s;
//                    s.push(make_pair(i, j));
//
//                    while (!s.empty())
//                    {
//                        auto pos = s.top();
//                        s.pop();
//                        visited[pos.first][pos.second] = true;
//                        tileCount++;
//
//                        if (pos.first < minRow)
//                            minRow = pos.first;
//                        if (pos.first > maxRow)
//                            maxRow = pos.first;
//                        if (pos.second < minCol)
//                            minCol = pos.second;
//                        if (pos.second > maxCol)
//                            maxCol = pos.second;
//
//                        if (pos.second - 1 >= 0 && !gameBoard[pos.first][pos.second - 1] && !visited[pos.first][pos.second - 1])
//                            s.push(make_pair(pos.first, pos.second - 1));
//                        if (pos.second + 1 < len && !gameBoard[pos.first][pos.second + 1] && !visited[pos.first][pos.second + 1])
//                            s.push(make_pair(pos.first, pos.second + 1));
//                        if (pos.first - 1 >= 0 && !gameBoard[pos.first - 1][pos.second] && !visited[pos.first - 1][pos.second])
//                            s.push(make_pair(pos.first - 1, pos.second));
//                        if (pos.first + 1 < len && !gameBoard[pos.first + 1][pos.second] && !visited[pos.first + 1][pos.second])
//                            s.push(make_pair(pos.first + 1, pos.second));
//                    }
//
//                    if (tileMap.find(tileCount) != tileMap.end())
//                    {
//                        int width = maxCol - minCol + 1;
//                        int height = maxRow - minRow + 1;
//                        auto rectangularTile = MakeRectangularTile(gameBoard, i, j, width, height, true);
//
//                        auto iter = tileMap.equal_range(tileCount);
//                        for (auto it = iter.first; it != iter.second; it++)
//                        {
//                            if (IsEqualTile(rectangularTile, it->second))
//                            {
//                                fillCount += tileCount;
//                                break;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return fillCount;
//}
//
//int solution(vector<vector<int>> game_board, vector<vector<int>> table) {
//
//    unordered_multimap<int, vector<vector<int>>> tileMap;
//
//    FindTiles(table, tileMap);
//
//    int answer = FillEmptyBoard(game_board, tileMap);
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> gameBoard{
//    {1,1,0,0,1,0},
//    {0,0,1,0,1,0},
//    {0,1,1,0,0,1},
//    {1,1,0,1,1,1},
//    {1,0,0,0,1,0},
//    {0,1,1,1,0,0} };
//
//    vector<vector<int>> table{
//    {1,0,0,1,1,0},
//    {1,0,1,0,1,0},
//    {0,1,1,0,1,1},
//    {0,0,1,0,0,0},
//    {1,1,0,1,1,0},
//    {0,1,0,0,0,0} };
//
//    solution(gameBoard, table);
//
//    return 0;
//}