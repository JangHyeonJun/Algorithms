//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int num[11];
//	num[0] = 1;
//	num[1] = 2;
//	num[2] = 4;
//
//	int t;
//	cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		int n;
//		cin >> n;
//		for (int j = 3; j < n; j++)
//			num[j] = num[j - 1] + num[j - 2] + num[j - 3];
//		cout << num[n - 1] << '\n';
//	}
//
//	return 0;
//}