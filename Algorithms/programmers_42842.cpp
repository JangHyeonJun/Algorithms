//#include <string>
//#include <vector>
//#include <math.h>
//
//using namespace std;
//
//vector<pair<int, int>> GetDivisor(int n)
//{
//	vector<pair<int, int>> divisorList;
//	const auto maxWidth = (int)sqrt(n);
//	for (int i = 1; i <= maxWidth; i++)
//		if (n % i == 0)
//			divisorList.push_back(make_pair(n / i, i));
//
//	return divisorList;
//}
//
//vector<int> GetCarpetSize(int brownArea, const vector<pair<int, int>>& yellowLengths)
//{
//	for (auto p : yellowLengths)
//		if (p.first * 2 + p.second * 2 + 4 == brownArea)
//			return vector<int> {p.first + 2, p.second + 2};
//
//	return vector<int>();
//}
//
//vector<int> solution(int brown, int yellow) {
//	vector<int> answer;
//	auto yellowLengths = GetDivisor(yellow);
//	answer = GetCarpetSize(brown, yellowLengths);
//	return answer;
//}
//
//int main()
//{
//	solution(8, 1);
//	return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//////과거 풀이
///*
//// 문제가 개편되었습니다. 이로 인해 함수 구성이나 테스트케이스가 변경되어, 과거의 코드는 동작하지 않을 수 있습니다.
//// 새로운 함수 구성을 적용하려면 [코드 초기화] 버튼을 누르세요. 단, [코드 초기화] 버튼을 누르면 작성 중인 코드는 사라집니다.
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
//*/