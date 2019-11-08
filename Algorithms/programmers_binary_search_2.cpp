//#include <string>
//#include <vector>
//
//using namespace std;
//
//unsigned long long immigration_people(vector<int> times, unsigned long long time)
//{
//	unsigned long long people = 0;
//	for (int n : times)
//		people += time / n;
//	return people;
//}
//
//unsigned long long solution(int n, vector<int> times) {
//	unsigned long long mid;
//	unsigned long long high = 2000000000000000000;
//	unsigned long long low = 0;
//
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		unsigned long long people = immigration_people(times, mid);
//		if (people < n)
//			low = mid + 1;
//		else if (people >= n)
//			high = mid - 1;
//	}
//
//
//	return low;
//}
//
//int main()
//{
//	vector<int> v = { 7, 10 };
//	solution(6, v);
//}