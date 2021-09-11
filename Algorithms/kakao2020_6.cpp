//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<vector<int>> skill) {
//    
//    int answer = 0;
//    for (auto s : skill)
//    {
//        int type = s[0];
//        int r1 = s[1];
//        int c1 = s[2];
//        int r2 = s[3];
//        int c2 = s[4];
//        int degree = s[5];
//
//        string index = $"";
//
//
//    }
//
//    for (int i = 0; i < board.size(); i++)
//        for (int j = 0; j < board[i].size(); j++)
//            if (board[i][j] > 0)
//                answer++;
//
//    return answer;
//}
//
////
////#include <string>
////#include <vector>
////#include <unordered_map>
////
////using namespace std;
////
////int solution(vector<vector<int>> board, vector<vector<int>> skill) {
////
////    int answer = 0;
////    unordered_map<int, unordered_map<pair<int, int>, int>> colDegrees;
////    for (auto s : skill)
////    {
////        int type = s[0];
////        int r1 = s[1];
////        int c1 = s[2];
////        int r2 = s[3];
////        int c2 = s[4];
////        int degree = s[5];
////
////
////
////        for (int i = r1; i <= r2; i++)
////            for (int j = c1; j <= c2; j++)
////                if (type == 1)
////                    board[i][j] -= degree;
////                else
////                    board[i][j] += degree;
////    }
////
////    for (int i = 0; i < board.size(); i++)
////        for (int j = 0; j < board[i].size(); j++)
////            if (board[i][j] > 0)
////                answer++;
////
////    return answer;
////}