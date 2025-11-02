//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//class Solution {
//public:
//    int findMinArrowShots(vector<vector<int>>& points) {
//        sort(points.begin(), points.end(), [](const auto& a, const auto& b) { return a[1] < b[1]; });
//
//        int result = 0;
//        vector<int> prev;
//        for (auto v : points)
//            if (!prev.empty() && prev[1] >= v[0])
//                continue;
//            else
//            {
//                result++;
//                prev = v;
//            }
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<vector<int>> v = { {3,9},{7,12},{3,8},{6,8},{9,10},{2,9},{0,9},{3,9},{0,6},{2,8} };
//    s.findMinArrowShots(v);
//
//    return 0;
//}