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
//int main()
//{
//	string s = "ABABAAAAAAABA";
//	solution(s);
//
//	return 0;
//}