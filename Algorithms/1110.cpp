#include <iostream>
#include <string>
using namespace std;

int main()
{
	bool flag = false;
	int count = 0;
	string num,initNum;
	char num10, num1;

	cin >> num;
	initNum = num;
	if (num.length() > 1)
	{
		num10 = num[0];
		num1 = num[1];
	}
	else
	{
		num10 = '\0';
		num1 = num[0];
	}

	cout << num10 - 48 << num1 - 48 << endl;
	while (!flag)
	{
		if (num10 != '\0')
		{
			num = to_string((num10 - 48) + (num1 - 48));
			if (num.length() > 1)
			{
				num10 = num[0];
				num1 = num[1];
			}
			else
			{
				num10 = '\0';
				num1 = num[0];
			}
		}
		else
		{
			num = to_string()
		}


		if (initNum == num)
			flag == true;
	}
}