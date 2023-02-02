//#include <vector>
//#include <queue>
//using namespace std;
//
//class Solution {
//public:
//  vector<vector<int>> subsets(vector<int>& nums) {
//    vector<vector<int>> result;
//    
//    queue<pair<int, vector<int>>> q;
//    q.push(make_pair(0, vector<int>()));
//
//    while (!q.empty())
//    {
//      auto p = q.front();
//      q.pop();
//
//      result.push_back(p.second);
//
//      for (int i = p.first; i < nums.size(); i++)
//      {
//        vector<int> v(p.second);
//        v.push_back(nums[i]);
//        q.push(make_pair(i + 1, v));
//      }
//    }
//
//    return result;
//  }
//};