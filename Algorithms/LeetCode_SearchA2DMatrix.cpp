//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  bool searchMatrix(vector<vector<int>>& matrix, int target) {
//
//    int bottom, top, middle;
//    bottom = 0;
//    top = matrix.size();
//    middle = (top + bottom) / 2;
//
//    while (bottom < middle)
//    {
//      if (matrix[middle].front() > target)
//        top = middle;
//      else if (matrix[middle].back() < target)
//        bottom = middle;
//      else
//        break;
//
//      middle = (top + bottom) / 2;
//    }
//
//    int row = middle;
//
//    bottom = 0;
//    top = matrix[row].size();
//    middle = (top + bottom) / 2;
//
//    while (bottom < middle)
//    {
//      if (matrix[row][middle] < target)
//        bottom = middle;
//      else if (matrix[row][middle] > target)
//        top = middle;
//      else
//        break;
//
//      middle = (top + bottom) / 2;
//    }
//
//    return matrix[row][middle] == target;
//  }
//};