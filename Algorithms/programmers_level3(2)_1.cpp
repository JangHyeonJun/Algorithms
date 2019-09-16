//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//
//int dfs(int number, int N, int curr, int count = 1)
//{
//	if (count > 8)
//		return -1;
//	if (curr == number)
//		return count;
//
//	int nextNum;
//	priority_queue<int, vector<int>, greater<int>> pq;
//
//	nextNum = curr + (N*10 +N);
//	if (nextNum == number)
//		return count + 2;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//	nextNum = curr * 10 + N;
//	if (nextNum == number)
//		return count + 1;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//	nextNum = curr + N;
//	if (nextNum == number)
//		return count + 1;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//	nextNum = curr - N;
//	if (nextNum == number)
//		return count + 1;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//	nextNum = curr * N;
//	if (nextNum == number)
//		return count + 1;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//	nextNum = curr / N;
//	if (nextNum == number)
//		return count + 1;
//	pq.push(dfs(number, N, nextNum, count + 1));
//
//
//	while (!pq.empty())
//	{
//		if (pq.top() != -1)
//			return pq.top();
//		pq.pop();
//	}
//	return -1;
//}
//
//int solution(int N, int number) {
//	int answer = 0;
//	answer = dfs(number, N, N, 1);
//	return answer;
//}
//
//int main()
//{
//	cout << dfs(256, 2, 2, 1) << endl;
//	return 0;
//}