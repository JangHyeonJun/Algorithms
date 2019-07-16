//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string input;
//	cin >> input;
//	int num;
//	bool binary[3];
//	for (int i = 0; i < input.length(); i++)
//	{
//		num = input[i] - 48;
//		for (int j = 0; j < 3; j++)
//			binary[j] = false;
//
//		if (num >= 4)
//		{
//			num -= 4;
//			binary[0] = true;
//		}
//		if (num >= 2)
//		{
//			num -= 2;
//			binary[1] = true;
//		}
//		if (num == 1)
//			binary[2] = true;
//
//		for (int j = 0; j < 3; j++)
//		{
//			if (binary[j])
//				cout << 1;
//			else if (i == 0)
//			{
//				if (j == 1 && binary[0])
//					cout << 0;
//				if (j == 2)
//					cout << 0;
//			}
//			else
//				cout << 0;
//		}
//	}
//
//	return 0;
//}