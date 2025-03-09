#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
앞에서 부터 채워넣으려고 해서 불필요한 코드들이 생겼음.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0)
            return;

        if (m == 0)
        {
            nums1 = nums2;
            return;
        }

        for (int i = m - 1; i >= 0; i--)
            nums1[n + i] = nums1[i];


        for (int i = 0, m = n, n = 0; i < nums1.size(); i++)
        {
            if (m >= nums1.size())
                nums1[i] = nums2[n++];
            else if (n >= nums2.size())
                nums1[i] = nums1[m++];
            else
                nums1[i] = nums1[m] < nums2[n] ? nums1[m++] : nums2[n++];
        }
    }
};

int main()
{
    Solution s;
    vector<int> v{ 0, 1, 0, 0, 0 };
    vector<int> v2{ 0, 0, 2 };
    s.merge(v, 2, v2, 3);
}