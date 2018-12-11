//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int T, x, y;
//	int cumNum, cumSum, predSum, count;
//	cin >> T;
//
//	for (int i = 0; i < T; i++)
//	{
//		cin >> x >> y;
//		cumNum = 0;
//		cumSum = 0;
//		predSum = 0;
//		count = 0;
//		y = y - x;
//		while (true)
//		{
//			if (y > 0)
//			{
//				count++;
//				predSum = cumSum + cumNum + 1;
//				if (y >= predSum)
//				{
//					cumNum++;
//					cumSum += cumNum;
//					y -= cumNum;
//				}
//				else
//				{
//					if (y >= cumSum)
//					{
//						y -= cumNum;
//					}
//					else
//					{
//						cumSum -= cumNum;
//						cumNum--;
//						y -= cumNum;
//					}
//				}
//			}
//			else
//				break;
//		}
//		cout << count << '\n';
//	}
//}