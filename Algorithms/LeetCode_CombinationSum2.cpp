#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void recursiveFind(const vector<int>& cand, int target, vector<vector<int>>& answer, vector<int>& comb, int i, int last)
    {
        if (target == 0)
            answer.push_back(comb);
        if (target <= 0)
            return;

        for (; i < cand.size(); i++)
        {
            if (cand[i] == last)
                continue;

            comb.push_back(cand[i]);
            target -= cand[i];

            recursiveFind(cand, target, answer, comb, i + 1, last);

            target += cand[i];
            comb.pop_back();
            last = cand[i];
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> answer;

        sort(candidates.begin(), candidates.end());
        vector<int> v;
        recursiveFind(candidates, target, answer, v, 0, 0);

        return answer;
    }
};

int main()
{
    Solution s;

    vector<int> v{ 1, 1, 2, 3, 3, 5 };
    int target = 7;

    s.combinationSum2(v, target);

    return 0;
}