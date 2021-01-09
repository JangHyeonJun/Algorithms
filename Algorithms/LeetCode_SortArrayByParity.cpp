#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int evenIndex = 0;
        int oddIndex = 1;

        while (evenIndex < A.size() && oddIndex < A.size())
        {
            if (A[evenIndex] % 2 != 0 && A[oddIndex] % 2 == 0)
            {
                Swap(A[evenIndex], A[oddIndex]);
                evenIndex++;
                oddIndex++;
            }
            else if (A[oddIndex] % 2 != 0)
            {
                oddIndex++;
            }
            else if (A[evenIndex] % 2 == 0)
            {
                evenIndex++;
            }
        }

        return A;
    }

    void Swap(int& a, int& b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    Solution s;
    s.sortArrayByParity(vector<int> {0, 2, 1});
}