#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		unordered_set<int> us;
		vector<vector<int>> result;
		
		sort(nums.begin(), nums.end());

		for (int left = 1; left < nums.size() - 2; left++)
		{
			int center = left + 1;
			int right = nums.size() - 1;

			if (left > 0 && nums[left] == nums[left - 1])
				continue;

			while (center < right)
			{
				int sum = nums[left] + nums[center] + nums[right];

				long long hash = (long long)left << 34 | (long long)center << 17 | (long long)right;

				if (sum == 0 && us.find(hash) == us.end())
				{
					us.insert(hash);
					result.push_back({ nums[left], nums[center], nums[right]});

					center++;
					right--;
				}
				else if (sum < 0)
					center++;
				else
					right--;
			}
		}

		return result;
    }
};

int main()
{
	Solution s;
	vector<int> v = { -1, 0, 1, 2, -1, -4 };
	vector<int> v2 = { -1, -1, -1, 0, 1, 1, 1 };
	vector<int> v3 = { -1, 0, 1, 2, -1, -4, -2, -3, 3, 0, 4 };
	vector<int> v4 = { -4, -2, -2, -2, 0, 1, 2, 2, 2, 3, 3, 4, 4, 6, 6 };
	s.threeSum(v);

	return 0;
}