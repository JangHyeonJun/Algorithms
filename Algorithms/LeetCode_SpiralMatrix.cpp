//#include <vector>
//
//using namespace std;
//
//class Solution {
//  vector<int> spiralOnce(vector<vector<int>>& matrix, int min, int rowMax, int colMax)
//  {
//    vector<int> v;
//
//    for (int i = min; i <= colMax; i++)
//      v.push_back(matrix[min][i]);
//    for (int i = min + 1; i <= rowMax; i++)
//      v.push_back(matrix[i][colMax]);
//
//    if (min < rowMax)
//      for (int i = colMax - 1; i >= min; i--)
//        v.push_back(matrix[rowMax][i]);
//    if (min < colMax)
//      for (int i = rowMax - 1; i > min; i--)
//        v.push_back(matrix[i][min]);
//
//    return v;
//  }
//
//public:
//  vector<int> spiralOrder(vector<vector<int>>& matrix) {
//    vector<int> result;
//
//    int m = matrix.size() - 1;
//    int n = matrix[0].size() - 1;
//    int i = 0;
//    while (i <= m && i <= n)
//    {
//      auto once = spiralOnce(matrix, i++, m--, n--);
//      result.insert(result.end(), once.begin(), once.end());
//    }
//
//    return result;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<vector<int>> v{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16} };
//  vector<vector<int>> v2{ {1,2,3}, {4,5,6}, {7,8,9} };
//  vector<vector<int>> v3{ {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
//  vector<vector<int>> v4{ {1,2,3 }};
//  s.spiralOrder(v);
//  s.spiralOrder(v2);
//  s.spiralOrder(v3);
//  s.spiralOrder(v4);
//
//  return 0;
//}