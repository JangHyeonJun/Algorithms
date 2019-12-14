//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//struct Check
//{
//	int row;
//	vector<bool> cols;
//	vector<bool> right;
//	vector<bool> left;
//};
//
//int dfs(int n)
//{
//	int count = 0;
//	int row = 0;
//	stack<Check> s;
//	vector<bool> cols(n, false);
//	vector<bool> right(n * 2 - 1, false);
//	vector<bool> left(n * 2 - 1, false);
//	for (int i = 0; i < n; i++)
//	{
//		cols[i] = true;
//		right[n + i - row - 1] = true;
//		left[i + row] = true;
//		Check c({ row + 1, cols, right, left });
//		s.push(c);
//		cols[i] = false;
//		right[n + i - row - 1] = false;
//		left[i + row] = false;
//	}
//
//	while (!s.empty())
//	{
//		Check c = s.top();
//		s.pop();
//		row = c.row;
//		cols = c.cols;
//		right = c.right;
//		left = c.left;
//		if (c.row == n)
//			count++;
//		else
//		{
//			for (int i = 0; i < n; i++)
//				if (!cols[i] && !right[n + i - row - 1] && !left[i + row])
//				{
//					cols[i] = true;
//					right[n + i - row - 1] = true;
//					left[i + row] = true;
//					s.push(Check({ row + 1, cols, right, left }));
//					cols[i] = false;
//					right[n + i - row - 1] = false;
//					left[i + row] = false;
//				}
//		}
//	}
//
//	return count;
//}
//
//
//int solution(int n) {
//	return dfs(n);
//}
//
//int main()
//{
//	solution(4);
//}