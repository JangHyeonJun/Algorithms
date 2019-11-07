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
//
//int main()
//{
//	string n = "4177252841";
//	solution(n, 4);
//}