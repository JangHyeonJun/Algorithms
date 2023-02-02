//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
//class Solution {
//  bool search(vector<vector<char>>& board, string word, int i, int j)
//  {
//    if (word.empty())
//      return true;
//
//    char tmp = board[i][j];
//    board[i][j] = '.';
//    char c = word[0];
//    string remain = word.substr(1, word.size() - 1);
//    if (i - 1 >= 0 && board[i - 1][j] == c && search(board, remain, i - 1, j))
//      return true;
//    if (i + 1 < board.size() && board[i + 1][j] == c && search(board, remain, i + 1, j))
//      return true;
//    if (j - 1 >= 0 && board[i][j - 1] == c && search(board, remain, i, j - 1))
//      return true;
//    if (j + 1 < board[0].size() && board[i][j + 1] == c && search(board, remain, i, j + 1))
//      return true;
//    board[i][j] = tmp;
//
//    return false;
//  }
//public:
//  bool exist(vector<vector<char>>& board, string word) {
//    for (int i = 0; i < board.size(); i++)
//      for (int j = 0; j < board[0].size(); j++)
//        if (board[i][j] == word.front() && search(board, word.substr(1, word.size() - 1), i, j))
//          return true;
//
//
//    return false;
//  }
//};