//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> arr) {
//	sort(arr.begin(), arr.end());
//	int num = 1;
//	for(int i=0; i<arr.size(); i++)
//	{
//		if (num % arr[i] != 0)
//		{
//			int sum1 = num;
//			int sum2 = arr[i];
//			while (true)
//			{
//				if (sum1 == sum2)
//					break;
//				else if (sum1 < sum2)
//					sum1 += num;
//				else
//					sum2 += arr[i];
//			}
//			num = sum1;
//		}
//	}
//	return num;
//}