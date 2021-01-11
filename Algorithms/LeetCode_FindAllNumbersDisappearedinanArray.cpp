#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<bool> flag(nums.size(), true);
		for (const auto& num : nums)
			flag[num - 1] = false;

		vector<int> v;
		for (int i = 0; i < nums.size(); i++)
			if (flag[i])
				v.push_back(i + 1);

		return v;
	}
};

int main()
{
	Solution s;
	s.findDisappearedNumbers(vector<int> {1, 2, 4, 4});
}