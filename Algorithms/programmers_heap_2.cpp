//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
//	int answer = 0;
//	int day = 0;
//	int index = 0;
//	int prev_index = 0;
//	priority_queue<int> pq;
//	while (day < k)
//	{
//		
//		while (index < dates.size() && dates[index] <= day)
//			index++;
//		for (int i = prev_index; i < index; i++)
//			pq.push(supplies[i]);
//
//		if (stock < 1)
//		{
//			stock += pq.top();
//			pq.pop();
//			answer++;
//		}
//
//		prev_index = index;
//		stock--;
//		day++;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v1 = { 0, 10, 20 };
//	vector<int> v2 = { 29,5,10 };
//	solution(0, v1, v2, 30);
//}