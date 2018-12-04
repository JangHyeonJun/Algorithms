//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int count[26] = { 0, };
//	int max[2] = { -1, };
//	string input;
//
//	cin >> input;
//
//	for (int i = 0; i < input.length(); i++)
//		for (int j = 65; j <= 90; j++)
//		{
//			if ((int)input[i] == j || (int)input[i] == j + 32)
//			{
//				count[j - 65]++;
//			}
//		}
//
//	for (int i = 65; i <= 90; i++)
//	{
//		if (max[0] == -1 && count[i - 65] > 0)
//			max[0] = i;
//		else if (max[0] != -1 && count[max[0] - 65] <= count[i - 65])
//		{
//			max[1] = max[0];
//			max[0] = i;
//		}
//	}
//
//	if (count[max[0] - 65] != count[max[1] - 65])
//		cout << (char)max[0] << '\n';
//	else
//		cout << '?' << '\n';
//
//	return 0;
//}