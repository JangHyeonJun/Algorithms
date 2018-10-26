//#include <iostream>
//
//using namespace std;
//
//int get_squared_dist(int x1, int y1, int x2, int y2)
//{
//	int x_dist, y_dist;
//
//	if (x2 > x1)
//		x_dist = (x2 - x1) * (x2 - x1);
//	else
//		x_dist = (x1 - x2) * (x1 - x2);
//
//	if (y2 > y1)
//		y_dist = (y2 - y1) * (y2 - y1);
//	else
//		y_dist = (y1 - y2) * (y1 - y2);
//
//	return x_dist + y_dist;
//}
//
//int main()
//{
//	int T, n;
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		int x1, y1, x2, y2;
//		int count = 0;
//		int cx[51];
//		int cy[51];
//		int r[51];
//
//		cin >> x1 >> y1 >> x2 >> y2;
//		cin >> n;
//		
//		for (int j = 0; j < n; j++)
//		{
//			cin >> cx[j] >> cy[j] >> r[j];
//		}
//		for (int j = 0; j < n; j++)
//		{
//			if (get_squared_dist(x1, y1, cx[j], cy[j]) < r[j]*r[j])
//			{
//				if (get_squared_dist(x2, y2, cx[j], cy[j]) > r[j] * r[j])
//					count++;
//			}
//			else if(get_squared_dist(x2, y2, cx[j], cy[j]) < r[j] * r[j])
//			{
//				if (get_squared_dist(x1, y1, cx[j], cy[j]) > r[j] * r[j])
//					count++;
//			}
//		}
//		cout << count << endl;
//	}
//}