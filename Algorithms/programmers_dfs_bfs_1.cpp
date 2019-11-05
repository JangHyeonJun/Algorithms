//#include <string>
//#include <vector>
//
//using namespace std;
//
//int answer;
//
//void dfs(vector<int> numbers, int target, int n = 0, int count = 0)
//{
//	if (count >= numbers.size())
//	{
//		if (n == target)
//			answer++;
//		return;
//	}
//	dfs(numbers, target, n + numbers[count], count + 1);
//	dfs(numbers, target, n - numbers[count], count + 1);
//}
//
//int solution(vector<int> numbers, int target) {
//	answer = 0;
//	dfs(numbers, target);
//	return answer;
//}
//
////int main()
////{
////	vector<int> v = { 1,1,1,1,1 };
////	int i = 3;
////	solution(v, 3);
////}