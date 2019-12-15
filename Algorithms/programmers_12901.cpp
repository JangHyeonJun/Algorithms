//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> DAY { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
//vector<int> month = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//string solution(int a, int b) {
//	string answer = "";
//	int day_count = 4 + b;
//	for (int i = 2; i <= a; i++)
//		day_count += month[i-1];
//
//	return DAY[day_count%7];
//}