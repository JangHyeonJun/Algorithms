//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int count = 0;
//	int max = 0;
//	int X;
//	int a, b;
//	cin >> X;
//
//	while (true)
//	{
//		count++;
//		max += count;
//		if (X > max)
//			continue;
//		else
//		{
//			if (count % 2 == 0) // 짝수일경우
//			{
//				a = X - (max - count); 
//				b = max - X + 1;
//				break;
//			}
//			else
//			{
//				a = max - X + 1;
//				b = X - (max - count);
//				break;
//			}
//		}
//	}
//
//	cout << a << '/' << b << '\n';
//
//	return 0;
//}