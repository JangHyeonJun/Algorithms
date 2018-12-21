//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int N, input;
//	int num[10001] = { 0, };
//
//	// 입출력 동기화 해제를 통한 속도 향상
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		num[input]++;
//	}
//	for (int i = 0; i < 10001; i++)
//		for (int j = 0; j < num[i]; j++)
//			cout << i << '\n';
//
//	return 0;
//}