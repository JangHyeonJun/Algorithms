//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int input[8];
//	char flag = 0; // 0 mixed, 1 ascending, 2 descending
//	for (int i = 0; i < 8; i++)
//		cin >> input[i];
//
//	for (int i = 0; i < 7; i++)
//	{
//		if (input[0] < input[1] && input[i] < input[i + 1])
//			flag = 1;
//		else if (input[0] > input[1] && input[i] > input[i + 1])
//			flag = 2;
//		else
//		{
//			flag = 0;
//			break;
//		}
//	}
//
//	if (flag == 0)
//		cout << "mixed" << '\n';
//	else if (flag == 1)
//		cout << "ascending" << '\n';
//	else
//		cout << "descending" << '\n';
//
//	return 0;
//}