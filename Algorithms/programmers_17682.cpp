//#include <string>
//
//using namespace std;
//
//int solution(string dartResult)
//{
//	int answer = 0;
//	int prev = 0;
//	int prev_score = -987654321;
//	int score = 0;
//	for (int i = 0; i < dartResult.length(); i++)
//	{
//		if (dartResult[i] > '9' || dartResult[i] < '0')
//		{
//			score = stoi(dartResult.substr(prev, i - prev));
//			char bonus = dartResult[i];
//			char option = '\0';
//			if (i+1 < dartResult.length() &&
//				dartResult[i + 1] > '9' || dartResult[i + 1] < '0')
//			{
//				option = dartResult[i + 1];
//				i++;
//			}
//
//			if (bonus == 'D')
//				score = score * score;
//			else if (bonus == 'T')
//				score = score * score * score;
//
//			if (option == '*')
//			{
//				if (prev_score != -987654321)
//					prev_score *= 2;
//				score *= 2;
//			}
//			else if (option == '#')
//				score = -score;
//
//			if(prev_score != -987654321)
//				answer += prev_score;
//			prev_score = score;
//			prev = i+1;
//		}
//	}
//	answer += score;
//	return answer;
//}
//
//int main()
//{
//	string s = "1D#2S*3S";
//	solution(s);
//}