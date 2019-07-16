//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int T, A, B;
//	cin >> T;
//	
//	for (int i = 0; i < T; i++)
//	{
//		cin >> A >> B;
//		
//		if (A > B)
//		{
//			int temp = A;
//			A = B;
//			B = temp;
//		}
//		int prevA = A;
//		int prevB = B;
//
//		while (true)
//		{
//			if (A == B)
//				break;
//			else if (A < B)
//				A += prevA;
//			else
//				B += prevB;
//		}
//		cout << A << '\n';
//	}
//
//	return 0;
//}