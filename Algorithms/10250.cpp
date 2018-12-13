//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int T, H, W, N;
//	int floor, seq;
//	cin >> T;
//	for (int k = 0; k < T; k++)
//	{
//		cin >> H >> W >> N;
//
//		if (N % H != 0)
//			floor = N % H;
//		else
//			floor = H;
//		seq = (N-1) / H + 1;
//
//		if (seq > 9)
//			cout << floor << seq << '\n';
//		else
//			cout << floor << 0 << seq << '\n';
//	}
//
//
//	return 0;
//}