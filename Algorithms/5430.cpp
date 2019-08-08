//#include <iostream>
//#include <string>
//#include <string.h>
//#include <deque>
//
//using namespace std;
//
//deque<int> makeDQ(string arr)
//{
//	deque<int> dq;
//	// remove '[',']'
//	arr = arr.substr(1, arr.length() - 2);
//	char *slice = _strdup(arr.c_str());
//	slice = strtok(slice, ",");
//	while (slice != NULL)
//	{
//		dq.push_back(atoi(slice));
//		slice = strtok(NULL, ",");
//	}
//
//	//while (dq.size() > 0)
//	//{
//	//	cout << dq.front() << '\n';
//	//	dq.pop_front();
//	//}
//
//	return dq;
//}
//
//void printDQ(const deque<int> &dq, bool front)
//{
//	cout << '[';
//	
//	if (dq.size() > 0)
//	{
//		if (front)
//		{
//			for (int i = 0; i < dq.size() - 1; i++)
//				cout << dq[i] << ',';
//			cout << dq[dq.size() - 1] << ']' << '\n';
//		}
//		else
//		{
//			for (int i = dq.size() - 1; i > 0; i--)
//				cout << dq[i] << ',';
//			cout << dq[0] << ']' << '\n';
//		}
//	}
//	else
//		cout << ']' << '\n';
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		string input, arr;
//		int size;
//		cin >> input >> size >> arr;
//
//		deque<int> dq = makeDQ(arr);
//		bool front = true;
//		bool error = false;
//		for (int i = 0; i < input.length(); i++)
//		{
//			if (input[i] == 'R')
//				front = !front;
//			else if (input[i] == 'D')
//			{
//				if (dq.size() == 0)
//				{
//					error = true;
//					break;
//				}
//
//				if (front)
//					dq.pop_front();
//				else
//					dq.pop_back();
//			}
//		}
//		if (error)
//			cout << "error" << '\n';
//		else
//			printDQ(dq, front);
//	}
//	return 0;
//}