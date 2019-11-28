//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<vector<int>> baseball) {
//	int answer = 0;
//	for (int i = 111; i < 999; i++)
//	{
//		string num = to_string(i);
//		bool equal = true;
//
//		if (num[0] == '0' || num[1] == '0' || num[2] == '0')
//			continue;
//		if (num[0] != num[1] && num[1] != num[2] && num[0] != num[2])
//		{
//			for (int i = 0; i < baseball.size(); i++)
//			{
//				int strike = 0, ball = 0;
//				string expect = to_string(baseball[i][0]);
//				for (int j = 0; j < 3; j++)
//					for (int k = 0; k < 3; k++)
//						if (num[k] == expect[j])
//						{
//							if (j == k)
//								strike++;
//							else
//								ball++;
//						}
//				if (baseball[i][1] != strike || baseball[i][2] != ball)
//				{
//					equal = false;
//					break;
//				}
//			}
//			if (equal)
//				answer++;
//		}
//	}
//	return answer;
//}