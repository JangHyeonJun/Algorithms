//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        vector<vector<int>> result;    
//
//        if (nums.size() < 4)
//            return result;
//
//        sort(nums.begin(), nums.end());
//
//        for (int i = 0; i < nums.size() - 3; i++)
//            for (int j = i + 1; j < nums.size() - 2; j++)
//            {
//                int l = j + 1;
//                int r = nums.size() - 1;
//
//                if (i > 0 && nums[i] == nums[i - 1])
//                    continue;
//                else if (j > i + 1 && nums[j] == nums[j - 1])
//                    continue;
//
//                while (l < r)
//                {
//                    long long sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
//
//                    if (sum == target)
//                    {
//                        result.push_back({ nums[i], nums[j], nums[l], nums[r] });
//                        int prevL = l;
//                        int prevR = r;
//                        while (l < r && nums[l] == nums[prevL]) l++;
//                        while (l < r && nums[r] == nums[prevR]) r--;
//                    }
//                    else if (sum < target)
//                        l++;
//                    else
//                        r--;
//                }
//            }
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v{ 1, 0, -1, 0, -2, 2 };
//    vector<int> v2{ 2, 2, 2, 2, 2 };
//    vector<int> v3{ 2, 1, 1, 1, 1, 2, 2 };
//    vector<int> v4{ -2, -2, -1, -1, 1, 1, 2, 2 };
//
//    auto result = s.fourSum(v3, 7);
//
//    return 0;
//}