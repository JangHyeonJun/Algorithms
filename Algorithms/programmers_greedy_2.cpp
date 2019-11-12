//#include <string>
//#include <vector>
//#include <cstdlib>
//
//using namespace std;
//
//bool isA[21];
//
//pair<int, int> findNear(string s, int index)
//{
//	int to_right = index+1;
//	int count_right = 1;
//	int to_left = index-1;
//	int count_left = 1;
//	while (true)
//	{
//		if (to_right == index)
//			return make_pair(0, -1);
//		if (to_right >= s.length())
//			to_right = 0;
//		if (s[to_right] != 'A')
//			break;
//		to_right++;
//		count_right++;
//	}
//	while (true)
//	{
//		if (to_left == index)
//			return make_pair(0, -1);
//		if (to_left < 0)
//			to_left = s.length()-1;
//		if (s[to_left] != 'A')
//			break;
//		to_left--;
//		count_left++;
//	}
//
//	return count_right < count_left ? 
//		make_pair(count_right, to_right) : 
//		make_pair(count_left, to_left);
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
//}
//
//	return answer;
//}
//
//int main()
//{
//	string s = "XXAAAAAAAAAAAAAXX";
//	solution(s);
//
//	return 0;
//}