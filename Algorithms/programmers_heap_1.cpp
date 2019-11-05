//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int solution(vector<int> scoville, int K) {
//	int answer = 0;
//	priority_queue<int, vector<int>, greater<int>> pq;
//	for (int i = 0; i < scoville.size(); i++)
//		pq.push(scoville[i]);
//
//	while (pq.top() < K)
//	{
//		if (pq.size() < 2)
//			return -1;
//		int first, second, mix;
//		first = pq.top();
//		pq.pop();
//		second = pq.top();
//		pq.pop();
//		mix = first + second * 2;
//		pq.push(mix);
//		answer++;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v = { 1,2,3,9,10,12 };
//	solution(v, 7);
//}