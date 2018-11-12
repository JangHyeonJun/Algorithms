//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	float score[1001];
//	float M = -1;
//	float sum = 0;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> score[i];
//		if (score[i] > M)
//			M = score[i];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		score[i] = score[i] / M * 100;
//		sum += score[i];
//	}
//	cout << sum / N << '\n';
//
//	return 0;
//		
//}