//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int gram, n;
//	float price;
//	float min = 0.0f;
//
//	cin >> price >> gram;
//
//	min = price / gram;
//
//	cin >> n;
//
//	for (int i = 1; i <= n; i++)
//	{
//		float nMin;
//		cin >> price >> gram;
//		nMin = price / gram;
//		if (min > nMin)
//			min = nMin;
//	}
//	cout << fixed;
//	cout.precision(2);
//	cout << min*1000.0f;
//
//	return 0;
//}