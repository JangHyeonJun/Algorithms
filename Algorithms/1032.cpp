//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n, length;
//	cin >> n;
//	string *file = new string[n];
//	string pattern;
//	for (int i = 0; i < n; i++)
//		cin >> file[i];
//
//	length = file[0].length();
//
//	for (int i = 0; i < length; i++)
//	{
//		char patternC = file[0][i];
//		for (int j = 1; j < n; j++)
//		{
//			if (patternC != file[j][i])
//			{
//				patternC = '?';
//				break;
//			}
//		}
//		pattern.push_back(patternC);
//	}
//
//	cout << pattern;
//
//	return 0;
//}