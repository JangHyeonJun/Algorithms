//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string input;
//	cin >> input;
//
//	int multi = 1;
//	int sum = 0;
//	int length = input.length();
//
//	for (int i = length - 1; i >= 0; i--)
//	{
//		if (input[i] < 58)
//			sum += (input[i] - 48) * multi;
//		else
//			sum += (input[i] - 55) * multi;
//
//		multi *= 16;
//	}
//
//	cout << sum;
//
//	return 0;
//}