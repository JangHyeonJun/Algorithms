//#include <vector>
//#include <queue>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//  vector<vector<int>> combine(int n, int k) {
//    vector<vector<int>> result;
//    queue<pair<int, vector<int>>> q;
//    for (int i = 1; i <= n; i++)
//      q.push(make_pair(i, vector<int>{ i }));
//
//    while (!q.empty())
//    {
//      auto p = q.front();
//      q.pop();
//
//      if (p.second.size() == k)
//      {
//        result.push_back(p.second);
//        continue;
//      }
//
//      for (int i = p.first + 1; i <= n; i++)
//      {
//        vector<int> v(p.second);
//        v.push_back(i);
//        q.push(make_pair(i, v));
//      }
//    }
//
//    return result;
//  }
//};