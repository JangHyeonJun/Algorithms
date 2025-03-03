//#include <vector>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//private:
//    int to_int(char& c)
//    {
//        return (int)c - 48;
//    }
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//
//        unordered_set<int> us[27];
//        auto size = board.size();
//
//
//        for (int i = 0; i < size; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                char key = board[i][j];
//                if (key == '.')
//                {
//                    continue;
//                }
//
//
//                if (us[i].contains(key) ||
//                    us[j + size].contains(key) ||
//                    us[(i / 3) * 3 + j / 3 + (size * 2)].contains(key))
//                {
//                    return false;
//                }
//
//                us[i].insert(key);
//                us[j + size].insert(key);
//                us[(i / 3) * 3 + j / 3 + (size * 2)].insert(key);
//            }
//        }
//
//        return true;
//    }
//};