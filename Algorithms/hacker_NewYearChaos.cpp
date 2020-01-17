//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//
////void minimumBribes(vector<int> q) {
////	int bribes = 0;
////	for (int i = 0; i < q.size(); i++)
////	{
////		if (q[i] - i - 1 > 2)
////		{
////			cout << "Too chaotic" << endl;
////			return;
////		}
////		for (int j = i + 1; j < q.size(); j++)
////			if (q[j] < q[i])
////				bribes++;
////	}
////
////	cout << bribes << endl;
////}
//
//void swap(int& a, int& b)
//{
//	int tmp = move(a);
//	a = move(b);
//	b = move(tmp);
//}
//
//void minimumBribes(vector<int> q) {
//	int bribes = 0;
//	for (int i = q.size()-1; i >= 0; i--)
//	{
//		if (q[i] - i - 1 > 2)
//		{
//			cout << "Too chaotic" << endl;
//			return;
//		}
//		for (int j = 0 > q[i] - 2 ? 0 : q[i] - 2; j < i; j++)
//			if (q[j] > q[i])
//				bribes++;
//	}
//
//	cout << bribes << endl;
//}
//
//int main()
//{
//	vector<int> v = {1, 2, 5, 3, 7, 8, 6, 4};
//	minimumBribes(v);
//}