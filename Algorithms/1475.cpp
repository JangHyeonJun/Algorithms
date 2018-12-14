//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int num[9] = { 0, };
//	int setNum = 0;
//	string input;
//
//	cin >> input;
//
//	for (int i = 0; i < input.length(); i++)
//	{
//		if (input[i] - 48 == 9)
//			num[6]++;
//		else
//			num[input[i] - 48]++;
//	}
//
//	num[6] = (num[6] / 2) + (num[6] % 2);
//
//	for (int i = 0; i < 9; i++)
//	{
//		if (setNum < num[i])
//			setNum = num[i];
//	}
//
//	cout << setNum << '\n';
//
//	return 0;
//}