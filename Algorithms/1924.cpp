//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	string weekDay[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
//	int monthDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	
//	int x, y;
//	cin >> x >> y;
//
//	int dayCount = 0;
//
//	for (int i = 0; i < x-1; i++)
//	{
//		dayCount += monthDay[i];
//	}
//	dayCount += y-1;
//
//	cout << weekDay[dayCount % 7] << '\n';
//
//	return 0;
//}