//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(vector<vector<int>> triangle) {
//	int i, j, max;
//	i = j = max = 0;
//	for (i = 1; i < triangle.size(); i++)
//		for (j = 0; j < triangle[i].size(); j++)
//			if (j == 0)
//				triangle[i][j] += triangle[i - 1][j];
//			else if (j == triangle[i].size() - 1)
//				triangle[i][j] += triangle[i - 1][j - 1];
//			else
//				if (triangle[i - 1][j] > triangle[i - 1][j - 1])
//					triangle[i][j] += triangle[i - 1][j];
//				else
//					triangle[i][j] += triangle[i - 1][j - 1];
//
//	for (j = 0; j < triangle[i - 1].size(); j++)
//		if (triangle[i - 1][j] > max)
//			max = triangle[i - 1][j];
//
//	return max;
//}
//
//int main()
//{
//	vector<vector<int>> v = { {7}, {3,8}, {8,1,0}, {2,7,4,4}, {4,5,2,6,5} };
//	cout << solution(v) << endl;
//
//}