//#include <vector>
//#include <stack>
//#include <unordered_set>
//
//using namespace std;
//
//struct Data
//{
//    vector<bool> flags;
//    vector<int> v;
//    int hash;
//};
//
//class Solution {
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//
//        vector<vector<int>> result;;
//        unordered_set<int> resultSet;
//
//        stack<Data> s;
//        s.push(Data{ vector<bool>(nums.size()), {} , 0 });
//
//        while (s.empty() == false)
//        {
//            auto data = s.top();
//            s.pop();
//
//            if (data.v.size() == nums.size())
//            {
//                if (resultSet.find(data.hash) == resultSet.end())
//                {
//                    result.push_back(data.v);
//                    resultSet.insert(data.hash);
//                }
//                continue;
//            }
//
//            int multiple = 1;
//            for (int i = 0; i < data.v.size(); i++)
//                multiple *= 10;
//
//            for (int i = nums.size() - 1; i >= 0; i--)
//            {
//                if (data.flags[i])
//                    continue;
//
//                data.flags[i] = true;
//                data.v.push_back(nums[i]);
//                data.hash += nums[i] * multiple;
//
//                s.push(data);
//
//                data.flags[i] = false;
//                data.v.pop_back();
//                data.hash -= nums[i] * multiple;
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