//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//		int len = gas.size();
//		int remainGas = 0;
//		int maxIndex = -1;
//		int maxRemainGas = 0;
//		for (int i = len - 1; i >= 0; i--)
//		{
//			remainGas += gas[i] - cost[i];
//			if (remainGas >= maxRemainGas)
//			{
//				maxRemainGas = remainGas;
//				maxIndex = i;
//			}
//		}
//
//		if (remainGas < 0)
//			return -1;
//
//		return maxIndex;
//	}
//};