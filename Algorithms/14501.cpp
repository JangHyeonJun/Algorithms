//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//
//	N++;
//	vector<int> t(N);
//	vector<int> p(N);
//	vector<int> result(N);
//	for (int i = 0; i < N - 1; i++)
//	{
//		int tt, pp;
//		cin >> tt >> pp;
//		t[i] = tt;
//		p[i] = pp;
//	}
//	// 예제 입력받기.
//
//	int max = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		int sum = result[i] + p[i];
//		int target = i + t[i];
//		if (target >= N)
//			continue;
//
//		for (int j = target; j < N; j++)
//		{
//			result[j] = sum > result[j] ? sum : result[j];
//			max = max > result[j] ? max : result[j];
//		}
//	}
//
//	cout << max;
//
//	return 0;
//}