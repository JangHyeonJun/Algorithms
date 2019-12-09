//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> path;
//
//void hanoi(int n, int from = 1, int by = 2, int to = 3)
//{
//	if (n == 1)
//		path.push_back(vector<int>{from, to});
//	else
//	{
//		hanoi(n - 1, from, to, by);
//		path.push_back(vector<int>{from, to});
//		hanoi(n - 1, by, from, to);
//	}
//}
//
//vector<vector<int>> solution(int n) {
//	hanoi(n);
//	return path;
//}