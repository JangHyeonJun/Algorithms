//#include <string>
//#include <vector>
//
//using namespace std;
//
//int min_result = 9;
//
//
//void dfs(int N, int number, int prev_num = 0, int count = 0)
//{
//	if (count > 8)
//		return;
//	if (prev_num == number && count < min_result)
//		min_result = count;
//	int oper_num = 0;
//	for (int i = count + 1; i < 9; i++)
//	{
//		oper_num = oper_num * 10 + N;
//		
//		dfs(N, number, prev_num + oper_num, i);
//		dfs(N, number, prev_num - oper_num, i);
//		dfs(N, number, prev_num * oper_num, i);
//		dfs(N, number, prev_num / oper_num, i);
//	}
//}
//
//int solution(int N, int number) {
//	int answer = 0;
//	dfs(N, number);
//	if (min_result == 9)
//		return -1;
//	else
//		return min_result;
//}
//
//int main()
//{
//	solution(2, 11);
//}