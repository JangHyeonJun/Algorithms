#include <vector>

using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		vector<int> tmp(prices.size());
		int min = prices[0];
		int max = prices[prices.size() - 1];
		int result = 0;
		for (int i = 0; i < prices.size(); i++)
		{
			if (prices[i] < min)
				min = prices[i];
			tmp[i] = min;
		}

		for (int j = prices.size() - 1; j >= 0; j--)
		{
			if (prices[j] > max)
				max = prices[j];

			if (max - tmp[j] > result)
				result = max - tmp[j];
		}

		return result;
	}
};

int main()
{
	Solution s;
	vector<int> v{ 7, 4, 6, 3, 1 };
	s.maxProfit(v);
}