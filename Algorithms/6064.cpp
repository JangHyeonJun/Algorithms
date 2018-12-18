//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int T, M, N, x, y, cx, init, count;
//
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> M >> N >> x >> y;
//
//		count = y;
//		cx = y;
//
//		if (cx > M && cx % M == 0)
//			cx = M;
//		else if(cx > M)
//			cx = cx % M;
//
//		init = cx;
//
//		while (true)
//		{
//			if (cx == x)
//			{
//				cout << count << '\n';
//				break;
//			}
//			else
//			{
//				count += N;
//				cx += N;
//
//				if (cx > M && cx % M == 0)
//					cx = M;
//				else if (cx > M)
//					cx = cx % M;
//
//				if (cx == init)
//				{
//					cout << -1 << '\n';
//					break;
//				}
//			}
//		}
//
//		//// 규칙 찾기
//		//cout << "==========" << '\n';
//		//cx = 0;
//		//int cy = 0;
//		//count = 0;
//		//while (true)
//		//{
//		//	count++;
//		//	if (cx < M)
//		//		cx++;
//		//	else
//		//		cx = 1;
//
//		//	if (cy < N)
//		//		cy++;
//		//	else
//		//		cy = 1;
//		//	
//		//	if (cy == y)
//		//		cout << cx << ' ' << cy << " / count: " << count << '\n';
//		//	if (count > 1000)
//		//		break;
//		//}
//		//cout << "==========" << '\n';
//	}
//
//	return 0;
//}