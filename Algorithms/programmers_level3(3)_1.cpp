//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int getNum(string s)
//{
//	string num;
//	for (int i = 2; i < s.length(); i++)
//	{
//		num.push_back(s[i]);
//	}
//
//	return stoi(num);
//}
//
//vector<int> solution(vector<string> operations) {
//	vector<int> answer;
//	vector<int> v;
//	for (int i = 0; i < operations.size(); i++)
//	{
//		if (operations[i][0] == 'I')
//		{
//			int num = getNum(operations[i]);
//			v.push_back(num);
//		}
//		else if(v.empty())
//		{
//			continue;
//		}
//		else
//		{
//			sort(v.begin(), v.end());
//			if (operations[i][2] == '-')
//			{
//				v.erase(v.begin());
//			}
//			else
//			{
//				v.pop_back();
//			}
//		}
//	}
//	if (v.empty())
//	{
//		answer.push_back(0);
//		answer.push_back(0);
//	}
//	else 
//	{
//		sort(v.begin(), v.end());
//		answer.push_back(*(v.end() - 1));
//		answer.push_back(*(v.begin()));
//	}
//
//	return answer;
//}