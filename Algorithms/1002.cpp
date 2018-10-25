//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main()
//{
//	int T;
//	int x1, y1, r1, x2, y2, r2;
//
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//		
//		// 제곱근 함수 sqrt가 반환하는 double의 부동소수점 관련 부정확함을 없애기 위해 거리에 관한 연산을 모두 제곱으로 계산함 
//		int dist = ((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
//		int sum = (r1 + r2)*(r1 + r2);
//		int diff = 0;
//		if (r1 > r2)
//			diff = (r1 - r2)*(r1 - r2);
//		else
//			diff = (r2 - r1)*(r2 - r1);
//
//		if (dist == 0 && r1 == r2)
//			cout << -1;
//		else if (dist > sum || dist < diff)
//			cout << 0;
//		else if (dist == sum || (dist == diff && dist != 0))
//			cout << 1;
//		else if (dist < sum && dist > diff)
//			cout << 2;
//
//		cout << '\n';
//	}
//}