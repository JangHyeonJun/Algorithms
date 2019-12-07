//#include <iostream>
//#include <vector>
//using namespace std;
//
//int solution(vector<vector<int> > land)
//{
//	int answer = 0;
//	for (int i = 1; i < land.size(); i++)
//	{
//		for (int j = 0; j < land[i].size(); j++)
//		{
//			int max = 1;
//			for (int k = 0; k < land[i - 1].size(); k++)
//				if (j != k && land[i - 1][k] > max)
//					max = land[i - 1][k];
//			land[i][j] += max;
//			if (land[i][j] > answer)
//				answer = land[i][j];
//		}
//	}
//
//	return answer;
//}