//#include <string>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		for (int j = 0; j < lost.size(); j++)
//			if (reserve[i] == lost[j])
//			{
//				lost.erase(lost.begin() + j);
//				reserve[i] = -100;
//			}
//	}
//	
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		for(int j=0; j< lost.size(); j++)
//			if (abs(reserve[i] - lost[j]) <= 1)
//			{
//				lost.erase(lost.begin() + j);
//				break;
//			}
//	}
//	return n - lost.size();
//}