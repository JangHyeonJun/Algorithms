//#include <string>
//using namespace std;
//
//string answer;
//string used;
//bool check = true;
//
//string slice(string str1, int begin, int len)
//{
//	string str2;
//	for (int i = begin; i < begin + len; i++)
//		str2 += str1[i];
//	return str2;
//}
//
//string removeRule_2(string str)
//{
//	return str.substr(1, str.length() - 2);
//}
//string removeRule_1(string str)
//{
//	string str2;
//	for (int i = 0; i < str.length(); i += 2)
//		str2 += str[i];
//	return str2;
//}
//
//void checkRule(string str)
//{
//	int rule = 0;
//	if (str[0] == ' ')
//	{
//		check = false;
//		return;
//	}
//
//	bool allBig = true;
//	for (int i = 0; i < str.length(); i++)
//		if (str[i] > 'Z')
//			allBig = false;
//	if (allBig)
//	{
//		answer = str;
//		return;
//	}
//
//	if (str[0] <= 'Z')
//	{
//		char special;
//		if (str[1] > 'Z')
//			special = str[1];
//		else
//		{
//			check = false;
//			return;
//		}
//
//		int subLen = str.length();
//		for (int i = 1; i < str.length(); i += 2)
//		{
//			if (str[i + 1] > 'Z')
//			{
//				check = false;
//				return;
//			}
//			if (str[i] != special)
//			{
//				subLen = i;
//				break;
//			}
//		}
//
//		if (subLen >= str.length())
//		{
//			for (int i = 0; i < used.length(); i++)
//				if (used[i] == special)
//				{
//					check = false;
//					return;
//				}
//			used += special;
//
//			if (answer == "")
//				answer = removeRule_1(str);
//			else
//				answer = answer + " " + removeRule_1(str);
//		}
//		else
//		{
//			checkRule(str.substr(0, subLen));
//			checkRule(str.substr(subLen));
//		}
//	}
//	else
//	{
//		char special = str[0];
//		int subLen = str.length();
//
//		for (int i = 1; i < str.length(); i++)
//		{
//			if (str[i] == special)
//			{
//				subLen = i + 1;
//				break;
//			}
//		}
//		if (subLen >= str.length())
//		{
//			for (int i = 0; i < used.length(); i++)
//				if (used[i] == special)
//				{
//					check = false;
//					return;
//				}
//			used += special;
//
//			if (answer == "")
//				answer = removeRule_2(str);
//			else
//				answer = answer +  " " + removeRule_2(str);
//		}
//		else
//		{
//			checkRule(str.substr(0, subLen));
//			checkRule(str.substr(subLen));
//		}
//	}
//
//}
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//string solution(string sentence) {
//	answer = "";
//	used = "";
//	checkRule(sentence);
//	if (check)
//		return answer;
//	else
//		return "invalid";
//}
