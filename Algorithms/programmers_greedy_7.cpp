//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> weight) {
//	int sum = 0;
//	sort(weight.begin(), weight.end());
//
//	for (int i = 0; i < weight.size(); i++)
//	{
//		if (weight[i] > sum + 1)
//			break;
//		sum += weight[i];
//	}
//
//	return sum + 1;
//}