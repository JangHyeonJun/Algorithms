//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int solution(string s)
//{
//	int len = 1;
//	int max_len = len;
//	stack<char> st, st2;
//
//	auto iter = s.begin();
//	while (iter != s.end())
//	{
//		if (st.empty())
//		{
//			st.push(*iter);
//			iter++;
//			len = 0;
//		}
//		else if(st.top() == *iter)
//		{
//			while (iter != s.end() && st.top() != *iter)
//			{
//				st.pop();
//				len += 2;
//				iter++;
//				if (iter == s.end())
//					break;
//				st.push(*iter);
//				iter++;
//			}
//		}
//		else if (st.top() == *(iter + 1))
//		{
//			st.pop();
//			len += 3;
//			iter++;
//			if (iter != s.end())
//			{
//				st.push(*iter);
//				iter++;
//				while (iter != s.end() && st.top() != *iter)
//				{
//					st.pop();
//					len += 2;
//					iter++;
//					if (iter == s.end())
//						break;
//					st.push(*iter);
//					iter++;
//				}
//			}
//		}
//		else
//		{
//			st.push(*iter);
//			iter++;
//		}
//	}
//
//	return max_len;
//}
//
//int main()
//{
//	string s = "zfabcbadd";
//	solution(s);
//}