//#include <vector>
//#include <queue>
//#include <unordered_set>
//#include <string>
//using namespace std;
//
//class Solution {
//private:
//  string makeKey(const vector<int>& num)
//  {
//    string s;
//    int multiplier = 1;
//    for (auto n : num)
//      s += to_string(n);
//
//    return s;
//  }
//public:
//  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//
//    sort(nums.begin(), nums.end());
//    vector<vector<int>> result;
//    unordered_set<string> us;
//
//    queue<pair<int, vector<int>>> q;
//    q.push(make_pair(0, vector<int>()));
//
//    while (!q.empty())
//    {
//      auto pair = q.front();
//      q.pop();
//
//      result.push_back(pair.second);
//
//      for (int i = pair.first; i < nums.size(); i++)
//      {
//        auto subSet = vector<int>(pair.second);
//        subSet.push_back(nums[i]);
//
//        auto key = makeKey(subSet);
//        if (us.find(key) == us.end())
//        {
//          q.push(make_pair(i + 1, subSet));
//          us.insert(makeKey(subSet));
//        }
//      }
//    }
//
//    return result;
//  }
//};
//
//int main()
//{
//  Solution s;
//
//  vector<int> v{ 1,2,2 };
//  s.subsetsWithDup(v);
//
//  return 0;
//}