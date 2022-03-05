#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		unordered_set<string> us;
		vector<vector<int>> result;
		
		sort(nums.begin(), nums.end());

		for (int i = 0; i < nums.size() - 2; i++)
			for (int j = i + 1; j < nums.size() - 1; j++)
				for (int k = j + 1; k < nums.size(); k++)
					if ((nums[i] + nums[j] + nums[k] == 0))
					{
						auto s = to_string(nums[i]) + to_string(nums[j]) + to_string(nums[k]);

						if (us.find(s) != us.end())
							continue;

						us.insert(s);
						result.push_back({ nums[i],nums[j],nums[k] });
					}
		return result;
    }
};

int main()
{
	Solution s;
	vector<int> v = { -1, 0, 1, 2, -1, -4 };
	vector<int> v2 = { -1, -1, -1, 0, 1, 1, 1 };
	s.threeSum(v2);

	return 0;
}