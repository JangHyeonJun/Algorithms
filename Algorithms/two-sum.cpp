#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] + nums[j] == target)
                {
                    return vector<int>{ i, j };
                }
            }
        }
        return vector<int>();
    }
};

int main()
{
    Solution s;
    
    auto result = s.twoSum(vector<int>{ 1, 2, 9, 10 }, 10);

    for each (int n in result)
    {
        cout << n << endl;
    }

	return 0;
}