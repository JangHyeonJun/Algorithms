#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> v;

		for (int i = 0; i < nums.size(); i++)
		{
			int targetIndex = abs(nums[i]) - 1;
			if (nums[targetIndex] > 0)
				nums[targetIndex] = -abs(nums[targetIndex]);
		}

		for (int i = 0; i < nums.size(); i++)
			if (nums[i] > 0)
				v.push_back(i + 1);

		return v;
	}
};

int main()
{
	Solution s;
	s.findDisappearedNumbers(vector<int> {4, 3, 2, 7, 8, 2, 3, 1});
}