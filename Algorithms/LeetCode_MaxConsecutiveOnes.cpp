#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int max = sum;

        for (const auto& num : nums)
        {
            if (num == 1)
                sum++;
            else
                sum = 0;

            if (sum > max)
                max = sum;
        }

        return max;
    }
};


int main()
{
    Solution s;
    vector<int> v(0);
    cout << s.findMaxConsecutiveOnes(v) << endl;
}