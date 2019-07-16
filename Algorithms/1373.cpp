//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string input;
//	cin >> input;
//	int length = input.length();
//	int i = 0;
//	if (length % 3 == 1)
//	{
//		cout << input[0] - 48;
//		i = 1;
//	}
//	else if (length % 3 == 2)
//	{
//		if (input[0] == '1' && input[1] == '0')
//			cout << 2;
//		else if (input[0] == '1' && input[1] == '1')
//			cout << 3;
//		i = 2;
//	}
//
//	for (; i < length; i += 3)
//	{
//		int num = 0;
//		if (input[i] == '1')
//			num += 4;
//		if (input[i + 1] == '1')
//			num += 2;
//		if (input[i + 2] == '1')
//			num += 1;
//		cout << num;
//	}
//
//	return 0;
//}