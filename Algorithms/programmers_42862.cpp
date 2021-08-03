//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> GetClothesCount(int n, const vector<int>& lost, const vector<int>& reserve)
//{
//	vector<int> clothesCount(n, 1);
//
//	for (int n : lost)
//		clothesCount[n - 1]--;
//	for (int n : reserve)
//		clothesCount[n - 1]++;
//
//	return clothesCount;
//}
//
//int GetHavingPeopleSum(vector<int> clothesCount)
//{
//	for (int i = 0; i < clothesCount.size(); i++)
//	{
//		if (clothesCount[i] > 0)
//			continue;
//
//		if (i > 0 && clothesCount[i - 1] > 1)
//		{
//			clothesCount[i - 1]--;
//			clothesCount[i]++;
//		}
//		else if (i < clothesCount.size() - 1 && clothesCount[i + 1] > 1)
//		{
//			clothesCount[i + 1]--;
//			clothesCount[i]++;
//		}
//	}
//	
//	int sum = 0;
//	for (int n : clothesCount)
//		if (n > 0)
//			sum++;
//
//	return sum;
//}
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	int answer = 0;
//	vector<int> clothesCount = GetClothesCount(n, lost, reserve);
//	answer = GetHavingPeopleSum(clothesCount);
//	return answer;
//}
//
//int main()
//{
//	solution(5, { 2,4 }, { 1,3,5 });
//
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
////// 과거 풀이
///*
//#include <string>
//#include <cstdlib>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		for (int j = 0; j < lost.size(); j++)
//			if (reserve[i] == lost[j])
//			{
//				lost.erase(lost.begin() + j);
//				reserve[i] = -100;
//			}
//	}
//
//	for (int i = 0; i < reserve.size(); i++)
//	{
//		for(int j=0; j< lost.size(); j++)
//			if (abs(reserve[i] - lost[j]) <= 1)
//			{
//				lost.erase(lost.begin() + j);
//				break;
//			}
//	}
//	return n - lost.size();
//}
//*/