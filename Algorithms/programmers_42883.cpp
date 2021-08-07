//#include <string>
//using namespace std;
//
//string solution(string number, int k) {
//	string answer = "";
//	for (int i = 0; i < number.length() - k; i++)
//	{
//		char max = '0' - 1;
//		int maxIndex = -1;
//		for (int j = i; j <= i + k; j++)
//		{
//			if (number[j] > max)
//			{
//				max = number[j];
//				maxIndex = j;
//			}
//		}
//
//		answer += max;
//		k -= maxIndex - i;
//		i = maxIndex;
//	}
//
//	return answer;
//}
//
//int main()
//{
//	solution("19", 1);
//
//	return 0;
//}
//
//
//
//
//
//
////// 과거 풀이
///*
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//string solution(string number, int k) {
//	auto iter = number.begin();
//	for (int i = 0; i < k; i++)
//	{
//		auto remove = number.end() - 1;
//		auto iter = number.begin();
//		while (iter != number.end())
//		{
//			if (*iter < *(iter + 1))
//			{
//				remove = iter;
//				break;
//			}
//			else
//				iter++;
//		}
//		number.erase(remove);
//	}
//
//	return number;
//}
//*/