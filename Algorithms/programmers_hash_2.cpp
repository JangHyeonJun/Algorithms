//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool solution(vector<string> phone_book) {
//	for (int i = 0; i < phone_book.size(); i++)
//	{
//		for (int j = 0; j < phone_book.size(); j++)
//		{
//			if (i == j)
//				continue;
//			auto index = phone_book[j].find(phone_book[i]);
//			if (index == 0)
//				return false;
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	vector<string> s = { "123", "1234", "789" };
//	solution(s);
//	return 0;
//}