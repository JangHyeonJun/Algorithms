//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s) {
//	bool isFirst = false;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == ' ')
//		{
//			isFirst = false;
//			continue;
//		}
//		if (!isFirst)
//		{
//			s[i] = toupper(s[i]);
//			isFirst = true;
//		}
//		else
//			s[i] = tolower(s[i]);
//	}
//
//	return s;
//}