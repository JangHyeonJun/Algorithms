//#include <iostream>
//#include <string>
//#include <queue>
//
//using namespace std;
//
//
//bool Compare(string a, string b)
//{
//	if (a.length() > b.length())
//		return true;
//	else if (a.length() == b.length())
//	{
//		if (a > b)
//			return true;
//		else
//			return false;
//	}
//	else
//		return false;
//}
//
//
//int main()
//{
//	int N;
//	string input, buf;
//	string word[20000];
//	priority_queue<string, vector<string>, decltype(&Compare)> queue(Compare);
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		queue.push(input);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (buf != queue.top())
//		{
//			buf = queue.top();
//			cout << buf << '\n';
//			queue.pop();
//		}
//		else
//			queue.pop();
//	}
//
//	return 0;
//}