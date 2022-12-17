//#include <vector>
//#include <stack>
//
//using namespace std;
//
//struct Data
//{
//    vector<bool> flags;
//    vector<int> v;
//};
//
//class Solution {
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//
//        vector<vector<int>> result;;
//
//        stack<Data> s;
//        s.push(Data{ vector<bool>(nums.size()), {} });
//
//        while (s.empty() == false)
//        {
//            auto data = s.top();
//            s.pop();
//
//            if (data.v.size() == nums.size())
//            {
//                result.push_back(data.v);
//                continue;
//            }
//
//            for (int i = nums.size() - 1; i >= 0; i--)
//            {
//                if (data.flags[i])
//                    continue;
//
//                data.flags[i] = true;
//                data.v.push_back(nums[i]);
//
//                s.push(data);
//
//                data.flags[i] = false;
//                data.v.pop_back();
//            }
//        }
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1,1,2 };
//
//    s.permuteUnique(v);
//}