//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(string s) {
//	int answer = s.length();
//	for (int i = s.length() / 2; i > 0; i--)
//	{
//		int len = 0;
//		int count = 0;
//		int count_len = 0;
//		int j = 0;
//		string prev = "";
//		for (; j < s.length(); j += i)
//		{
//			string sub_str = s.substr(j, i);
//			if (sub_str != prev)
//			{
//				len += count_len;
//				count_len = 0;
//				count = 1;
//				len += sub_str.length();
//				prev = sub_str;
//			}
//			else
//			{
//				count++;
//				if (count > 1)
//					count_len = to_string(count).length();
//			}
//		}
//		len += count_len;
//
//		if (len < answer)
//			answer = len;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	solution("aaaaaaaaaab");
//}