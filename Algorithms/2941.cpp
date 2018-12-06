//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string croaEng2[7] = { "c=", "c-", "d-", "lj", "nj", "s=", "z=" };
//	string croaEng3 = "dz=";
//	string input;
//
//	cin >> input;
//
//	int count = input.length();
//
//
//	for (int i = 0; i < input.length() - 1; i++)
//	{
//		if (i < input.length() - 2 && input.compare(i, 3, croaEng3) == 0)
//		{
//			count -= 2;
//			i += 2;
//		}
//		else
//		{
//			for (int j = 0; j < 7; j++)
//			{
//				if (input.compare(i, 2, croaEng2[j]) == 0)
//				{
//					count -= 1;
//					i += 1;
//				}
//			}
//		}
//	}
//
//	cout << count << '\n';
//
//	return 0;
//}