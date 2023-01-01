//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//  vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//
//
//    vector<vector<int>> result;
//    int start = newInterval[0];
//    int end = newInterval[1];
//
//    if (intervals.size() <= 0)
//      return vector<vector<int>> { {start, end} };
//
//    int i = 0;
//
//    // Before Merge
//    for (; i < intervals.size(); i++)
//    {
//      if (intervals[i][1] >= start)
//        break;
//      result.push_back(vector<int>{ {intervals[i][0], intervals[i][1]}});
//    }
//
//    // Merge
//    for (; i < intervals.size(); i++)
//    {
//      if (intervals[i][0] > end)
//        break;
//
//      if (intervals[i][0] < start)
//        start = intervals[i][0];
//
//      if (intervals[i][1] > end)
//        end = intervals[i][1];
//    }
//
//    result.push_back(vector<int>{ {start, end}});
//
//    // After Merge
//    for (; i < intervals.size(); i++)
//    {
//      result.push_back(vector<int>{ {intervals[i][0], intervals[i][1]}});
//    }
//
//    return result;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<vector<int>> v1{ {1, 3}, {6, 9} };
//  vector<int> v11{ 2,5 };
//
//  vector<vector<int>> v2{ {1,2}, {3,5}, {6,7}, {8,10}, {12,16} };
//  vector<int> v22{ 4,8 };
//
//  s.insert(v2, v22);
//
//  return 0;
//}