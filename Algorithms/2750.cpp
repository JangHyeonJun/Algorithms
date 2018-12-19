//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	int num[1000];
//	int buf;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//		cin >> num[i];
//
//	//버블정렬
//	for (int i = 0; i < N - 1; i++)
//		for (int j = 0; j < N - 1; j++)
//		{
//			if (num[j] > num[j + 1])
//			{
//				buf = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = buf;
//			}
//		}
//	
//	for (int i = 0; i < N; i++)
//		cout << num[i] << '\n';
//
//	return 0;
//}