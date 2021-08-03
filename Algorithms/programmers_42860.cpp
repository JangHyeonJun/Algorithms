//#include <string>
//#include <vector>
//
//using namespace std;
//
//const int halfLen = ('Z' - 'A') / 2 + 1;
//
//void ChangeCharacter(char& origin, char& goal, int& count)
//{
//	if (origin < goal)
//		if (goal - origin < halfLen)
//			count += goal - origin;
//		else
//			count += (origin - 'A') + ('Z' - goal) + 1;
//	else
//		if (origin - goal < halfLen)
//			count += origin - goal;
//		else
//			count += ('Z' - origin) + (goal - 'A') + 1;
//	origin = goal;
//}
//
//int FindNextCursor(string currName, string goalName, int cursor, int& count)
//{
//	for (int i = 1; i <= goalName.length() / 2; i++)
//	{
//		if (cursor + i < goalName.length())
//		{
//			if (currName[cursor + i] != goalName[cursor + i])
//			{
//				count += i;
//				return cursor + i;
//			}
//		}
//		else
//		{
//			if (currName[i - (goalName.length() - cursor - 1)] != goalName[i - (goalName.length() - cursor - 1)])
//			{
//				count += i;
//				return  i - (goalName.length() - cursor - 1);
//			}
//		}
//
//		if (cursor - i >= 0)
//		{
//			if (currName[cursor - i] != goalName[cursor - i])
//			{
//				count += i;
//				return cursor - i;
//			}
//		}
//		else
//		{
//			if (currName[goalName.length() - (i - cursor)] != goalName[goalName.length() - (i - cursor)])
//			{
//				count += i;
//				return goalName.length() - (i - cursor);
//			}
//		}
//	}
//
//	return -1;
//}
//
//int solution(string name) {
//	int answer = 0;
//	int cursor = 0;
//
//	string defaultName;
//	for (auto _ : name)
//		defaultName += 'A';
//
//	while (cursor != -1 && defaultName[cursor] == 'A')
//	{
//		ChangeCharacter(defaultName[cursor], name[cursor], answer);
//		cursor = FindNextCursor(defaultName, name, cursor, answer);
//	}
//
//	return answer;
//}
//
//int main()
//{
//	solution("BBABB");
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
////// 이전 풀이
///*
//#include <string>
//#include <vector>
//#include <cstdlib>
//
//using namespace std;
//
//pair<int, int> findNear(string s, int index)
//{
//	int to_right = index;
//	int count_right = 0;
//	int to_left = index;
//	int count_left = 0;
//	while (true)
//	{
//		to_right++;
//		count_right++;
//		if (to_right >= s.length())
//			to_right = 0;
//		if (s[to_right] != 'A')
//			break;
//		if (to_right == index)
//			return make_pair(0, -1);
//
//	}
//	while (true)
//	{
//		to_left--;
//		count_left++;
//		if (to_left < 0)
//			to_left = s.length() - 1;
//		if (s[to_left] != 'A')
//			break;
//		if (to_left == index)
//			return make_pair(0, -1);
//	}
//
//	return count_left < count_right ?
//		make_pair(count_left, to_left) :
//		make_pair(count_right, to_right);
//}
//
//int solution(string name) {
//	int answer = 0;
//	int index = 0;
//
//	while (true)
//	{
//		if (name[index] != 'A')
//		{
//			int count = abs(name[index] - '[') < abs(name[index] - 'A')
//				? abs(name[index] - '[') : abs(name[index] - 'A');
//			answer += count;
//			name[index] = 'A';
//		}
//		int prevIndex = index;
//		pair<int, int> next = findNear(name, index);
//		index = next.second;
//		answer += next.first;
//		if (index == -1)
//			break;
//
//	}
//
//	return answer;
//}
//
////int main()
////{
////	string s = "BBAABB";
////	solution(s);
////
////	return 0;
////}
//*/