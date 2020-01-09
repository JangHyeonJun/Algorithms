//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<bool> self_number(10001, true);
//	for (int i = 1; i <= 10000; i++)
//	{
//		int temp = i;
//		int num = temp;
//		while (temp > 0)
//		{
//			num += temp % 10;
//			temp /= 10;
//		}
//		if (num <= 10000)
//			self_number[num] = false;
//	}
//	for (int i = 1; i <= 10000; i++)
//		if (self_number[i])
//			cout << i << '\n';
//
//	return 0;
//}
