#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    void recursiveFind(const vector<int>& cand, int target, vector<vector<int>>& answer, vector<int>& comb, int i)
    {
        if (target == 0)
            answer.push_back(comb);
        if (target <= 0)
            return;

        for (; i < cand.size(); i++)
        {
            comb.push_back(cand[i]);
            target -= cand[i];

            recursiveFind(cand, target, answer, comb, i + 1);

            target += cand[i];
            comb.pop_back();

            while (i < cand.size() - 1 && cand[i] == cand[i + 1])
                i++;
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> answer;

        sort(candidates.begin(), candidates.end());
        vector<int> v;
        recursiveFind(candidates, target, answer, v, 0);

        return answer;
    }
};

int main()
{
    Solution s;

    vector<int> v{ 1,1,1,1,1,1,2,2,2,2,2 };
    int target = 9;

    s.combinationSum2(v, target);

    return 0;
}