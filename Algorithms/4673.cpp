//#include <iostream>
//#include <string>
//using namespace std;
//
//int getNotSelfNumber(int num)
//{
//	int num1, num10, num100, num1000;
//
//	if (num < 100)
//	{
//		num1000 = 0;
//		num100 = 0;
//		num10 = (num - num1000 * 1000 - num100 * 100) / 10;
//		num1 = num % 10;
//	}
//	else if (num < 1000)
//	{
//		num1000 = 0;
//		num100 = (num - num1000 * 1000) / 100;
//		num10 = (num - num1000 * 1000 - num100 * 100) / 10;
//		num1 = num % 10;
//	}
//	else
//	{
//		num1000 = num / 1000;
//		num100 = (num - num1000 * 1000) / 100;
//		num10 = (num - num1000 * 1000 - num100 * 100) / 10;
//		num1 = num % 10;
//	}
//
//	return num + num1000 + num100 + num10 + num1;
//}
//
//int main()
//{
//	int n, notSelf;
//	bool flag[10001] = { false, };
//	n = 1;
//	while (n < 10000)
//	{
//		notSelf = getNotSelfNumber(n);
//		if (notSelf <= 10000)
//			flag[notSelf] = true;
//		n++;
//	}
//	for(int i=1; i<10001;i++)
//	{
//		if(!flag[i])
//			cout << i << endl;
//	}
//}
//
