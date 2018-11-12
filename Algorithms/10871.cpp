//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, X;
//	int A[10001];
//	bool start = false;
//	cin >> N >> X;
//	for (int i = 0; i < N; i++)
//		cin >> A[i];
//
//	for (int i = 0; i < N; i++)
//	{
//		if (A[i] < X && start)
//			cout << ' ' << A[i];
//		else if (A[i] < X && !start)
//		{
//			cout << A[i];
//			start = true;
//		}
//	}
//
//	return 0;
//}