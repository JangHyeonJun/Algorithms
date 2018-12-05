//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string input;
//	int N;
//	int count = 0;
//	
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		bool flag[26] = { false, };
//		for (int j = 0; j < input.length(); j++)
//		{
//			if (input[j] != input[j + 1])
//			{
//				if (flag[input[j] - 97])
//				{
//					count--;
//					break;
//				}
//				else
//					flag[input[j] - 97] = true;
//			}
//		}
//		count++;
//	}
//
//	cout << count << '\n';
//
//	return 0;
//}