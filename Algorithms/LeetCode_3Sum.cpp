#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		unordered_set<tuple<int, int, int>> us;

		vector<vector<int>> result;
		for (int i = 0; i < nums.size() - 2; i++)
			for (int j = i + 1; j < nums.size() - 1; j++)
				for (int k = j + 1; k < nums.size(); k++)
					if ((nums[i] + nums[j] + nums[k] == 0))
					{
						if (us.find({ nums[i],nums[j],nums[k] }) != us.end())
							continue;

						result.push_back({ nums[i],nums[j],nums[k] });
						us.insert({ nums[i],nums[j],nums[k] });
					}
		return result;
    }
};

int main()
{
	Solution s;
	vector<int> v = { -1, 0, 1, 2, -1, -4 };
	vector<int> v2 = { -1, -1, -1, 0, 1, 1, 1 };
	s.threeSum(v);

	return 0;
}