//#include <string>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//vector<int> solution(vector<int> heights) {
//	vector<int> answer;
//	stack<int> s;
//	for (int i = heights.size() - 1; i >= 0; i--)
//	{
//		int index = -1;
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (heights[j] > heights[i])
//			{
//				index = j;
//				break;
//			}
//		}
//		s.push(index + 1);
//	}
//	while (!s.empty())
//	{
//		answer.push_back(s.top());
//		s.pop();
//	}
//
//	return answer;
//}