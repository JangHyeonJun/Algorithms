//#include <vector>
//
//using namespace std;
//
//class Solution{
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        auto size = matrix.size();
//
//        vector<vector<int>> result(size, vector<int>(size));
//        
//        for (int i = 0; i < size; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                result[j][size - i - 1] = matrix[i][j];
//            }
//        }
//
//
//        for (int i = 0; i < size; i++)
//        {
//            for (int j = 0; j < size; j++)
//            {
//                matrix[i][j] = result[i][j];
//            }
//        }
//    }
//};