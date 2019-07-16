//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int T, a, b;
//	cin >> T;
//	
//	for (int i = 0; i < T; i++)
//	{
//		cin >> a >> b;
//		int num = 1;
//		for (int j = 0; j < b; j++)
//		{
//			num = (num * a) % 10;
//			if (num == 0)
//			{
//				num = 10;
//				break;
//			}
//		}
//		cout << num << '\n';
//	}
//
//	return 0;
//}