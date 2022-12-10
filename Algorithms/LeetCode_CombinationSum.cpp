//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct Comb
//{
//    vector<bool> flag;
//    vector<int> comb;
//    int sum;
//    int last;
//};
//
//class Solution {
//public:
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//
//        vector<vector<int>> answer;
//
//        vector<bool> flag(candidates.size());
//        Comb c{
//            flag,
//            {},
//            0,
//            -1
//        };
//        
//        queue<Comb> q;
//        q.push(c);
//
//        while (!q.empty())
//        {
//            c = q.front();
//            q.pop();
//
//            if (c.sum > target)
//                continue;
//
//            if (c.sum == target)
//            {
//                answer.push_back(c.comb);
//                continue;
//            }
//
//            for (int i = 0; i < candidates.size(); i++)
//            {
//                if (c.flag[i] == false && i >= c.last)
//                {
//                    auto& n = candidates[i];
//                    auto tmpLast = c.last;
//
//                    if (c.last != -1)
//                        c.flag[c.last] = i != c.last;
//                    c.comb.push_back(n);
//                    c.sum += n;
//                    c.last = i;
//
//                    q.push(c);
//
//                    c.flag[i] = false;
//                    c.comb.pop_back();
//                    c.sum -= n;
//                    c.last = tmpLast;
//                }
//            }
//
//        }
//
//        return answer;
//    }
//};
//
//int main()
//{
//    Solution s;
//
//    vector<int> v{ 2, 3, 6, 7 };
//    int target = 7;
//
//    s.combinationSum(v, 7);
//
//	return 0;
//}