//#include <vector>
//
//using namespace std;
//
//class Solution {
//
//    void recursive(vector<vector<int>>& result, const vector<int>& nums, vector<int>& list, vector<bool>& visited)
//    {
//        if (list.size() == nums.size())
//        {
//            result.push_back(list);
//            return;
//        }
//
//        for (int i = 0; i < visited.size(); i++)
//        {
//            if (visited[i])
//                continue;
//
//            visited[i] = true;
//            list.push_back(nums[i]);
//
//            recursive(result, nums, list, visited);
//
//            list.pop_back();
//            visited[i] = false;
//        }
//    }
//
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> result;
//        vector<int> v;
//        vector<bool> visited(nums.size());
//
//        recursive(result, nums, v, visited);
//
//        return result;
//    }
//};
//
//
//int main()
//{
//    Solution s;
//
//    vector<int> n{ 0, 1 };
//    s.permute(n);
//
//    return 0;
//}