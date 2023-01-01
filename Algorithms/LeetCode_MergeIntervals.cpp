//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//  vector<vector<int>> merge(vector<vector<int>>& intervals) {
//
//    sort(intervals.begin(), intervals.end(),
//      [](const vector<int>& a, const vector<int>& b) { return a[0] < b[0]; });
//
//    vector<vector<int>> result;
//
//    int start = intervals[0][0];
//    int last = intervals[0][1];
//    for (int i = 0; i < intervals.size(); i++)
//    {
//      auto curr = intervals[i];
//      
//      // overlapped
//      if (curr[0] <= last)
//      {
//        if (curr[1] > last)
//          last = curr[1];
//      }
//      else
//      {
//        result.push_back(vector<int>{ start, last});
//        start = curr[0];
//        last = curr[1];
//      }
//    }
//
//    if (result.size() <= 0 || last != (*(result.end() - 1))[1])
//      result.push_back(vector<int>{ start, last});
//  
//    return result;
//  }
//};
//
//int main()
//{
//  Solution s;
//  vector<vector<int>> v{ {1,3}, {2,6}, {8,10},{15,18} };
//  vector<vector<int>> v2{ {1,4}, {4,5} };
//
//  s.merge(v2);
//
//  return 0;
//}