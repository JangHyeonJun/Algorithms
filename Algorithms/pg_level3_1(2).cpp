//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> vv;
//
//void hanoi(int n, int from = 1, int by = 2, int to = 3)
//{
//	if (n == 1)
//		vv.push_back({ from, to });
//	else
//	{
//		hanoi(n - 1, from, to, by);
//		hanoi(1, from, by, to);
//		hanoi(n - 1, by, from, to);
//	}
//}
//
//vector<vector<int>> solution(int n) {
//	vector<vector<int>> answer;
//	hanoi(n);
//	answer = vv;
//	return answer;
//}