//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	bool flag = false;
//	int count = 0;
//	string num, initNum;
//	char num10, num1;
//
//	cin >> num;
//	initNum = num;
//
//	if (num.length() > 1)
//	{
//		num10 = num[0];
//		num1 = num[1];
//	}
//	else
//	{
//		num10 = '\0';
//		num1 = num[0];
//	}
//
//	while (true)
//	{
//		count++;
//		if (num10 != '\0') // 2자리 숫자일 경우
//		{
//			num = to_string((num10 - 48) + (num1 - 48));
//			if (num.length() > 1)
//			{
//				if (num1 != '0')
//					num10 = num1;
//				else
//					num10 = '\0';
//				num1 = num[1];
//			}
//			else
//			{
//				if (num1 != '0')
//					num10 = num1;
//				else
//					num10 = '\0';
//				num1 = num[0];
//			}
//		}
//		else // 1자리 숫자일 경우
//		{
//			num10 = num1;
//		}
//
//		if (num10 != '\0' && num10 != '0')
//			num = to_string(num10 - 48) + to_string(num1 - 48);
//		else
//			num = num1;
//
//		if (initNum == num)
//			break;
//	}
//
//	cout << count << '\n';
//}