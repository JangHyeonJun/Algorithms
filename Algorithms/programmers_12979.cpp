//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, vector<int> stations, int w)
//{
//	int answer = 0;
//	int index = 0;
//
//	for (int i = 1; i <= n;)
//	{
//		if (index < stations.size() && i >= stations[index] - w)
//			if (i > stations[index] + w)
//				index++;
//			else
//				i = stations[index] + w + 1;
//		else
//		{
//			answer++;
//			i += 2 * w + 1;
//		}
//	}
//
//	return answer;
//}