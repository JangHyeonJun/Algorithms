//#include <string>
//#include <vector>
//#include <deque>
//#include <algorithm>
//using namespace std;
//
//vector<int> solution(vector<string> operations) {
//	vector<int> answer;
//	deque<int> dq;
//	for (int i = 0; i < operations.size(); i++)
//	{
//		char oper = operations[i][0];
//		int num;
//
//		switch (oper)
//		{
//		case 'I':
//			num = stoi(operations[i].substr(2, operations[i].length() - 2));
//			if (dq.empty())
//				dq.push_back(num);
//			else if (num > dq.front())
//				dq.push_front(num);
//			else if (num < dq.back())
//				dq.push_back(num);
//			else
//			{
//				dq.push_back(num);
//				sort(dq.begin(), dq.end(), greater<int>());
//			}
//			break;
//		case 'D':
//			if (operations[i][2] == '-')
//			{
//				num = stoi(operations[i].substr(3, operations[i].length() - 3));
//				if (!dq.empty())
//					dq.pop_back();
//			}
//			else
//			{
//				num = stoi(operations[i].substr(2, operations[i].length() - 2));
//				if (!dq.empty())
//					dq.pop_front();
//			}
//			break;
//		default:
//			break;
//		}
//	}
//
//	if (dq.empty())
//	{
//		answer.push_back(0);
//		answer.push_back(0);
//	}
//	else
//	{
//		answer.push_back(dq.front());
//		answer.push_back(dq.back());
//	}
//
//	return answer;
//}
//
////int main()
////{
////	vector<string> v = { "I 16", "D 1" };
////	solution(v);
////}