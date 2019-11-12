//#include <iostream>
//#include <string>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//vector<int> solution(int brown, int red) {
//	vector<int> answer;
//
//	for (int red_w = sqrt(red); red_w <= red; red_w++)
//	{
//		if (red % red_w == 0 && red <= red_w * red_w)
//		{
//			int red_h = red / red_w;
//			int brown_w = red_w + 2;
//			int brown_h = red_h + 2;
//			if (brown == brown_w * brown_h - red_w * red_h)
//			{
//				answer.push_back(brown_w);
//				answer.push_back(brown_h);
//				break;
//			}
//		}
//	}
//	
//
//	return answer;
//}
//
////int main()
////{
////	solution(18, 6);
////	return 0;
////}