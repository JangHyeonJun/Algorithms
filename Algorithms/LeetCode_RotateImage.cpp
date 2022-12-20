//#include <vector>
//
//using namespace std;
//
//class Solution {
//    void swap(int& x, int& y)
//    {
//        int tmp = x;
//        x = y;
//        y = tmp;
//    }
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        int width = n;
//
//        for (int r = 0; r < n / 2; r++)
//        {
//            int min = r;
//            int max = n - 1 - r;
//            int width = max - min;
//
//            for (int m = 0; m < width; m++)
//            {
//                for (int i = 0; i < width; i++)
//                    swap(matrix[min + i][min], matrix[min + i + 1][min]);
//                for (int i = 0; i < width; i++)
//                    swap(matrix[max][min + i], matrix[max][min + i + 1]);
//                for (int i = 0; i < width; i++)
//                    swap(matrix[max - i][max], matrix[max - i - 1][max]);
//                for (int i = 0; i < width - 1; i++)
//                    swap(matrix[min][max - i], matrix[min][max - i - 1]);
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<vector<int>> v{ {0,1,2}, {3,4,5}, {6,7,8} };
//    vector<vector<int>> v2{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
//
//    s.rotate(v2);
//    return 0;
//}
//
//
////0 1 2
////3 4 5
////6 7 8
////
////0  1  2  3
////4  5  6  7
////8  9  10 11
////12 13 14 15