//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//bool is_prime_number(int num)
//{
//	if (num < 2)
//		return false;
//	for (int i = 2; i*i <= num; i++)
//		if (num%i == 0)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int T;
//	int N;
//	int end = 1;
//	int part1 = 0, part2 = 0;
//	bool flag[1000001] = { true, };
//	memset(flag, true, sizeof(flag));
//
//	cin >> T;
//	for (int t=0; t<T; t++)
//	{
//		cin >> N;
//		// 에라토스테네스의 체를 사용하여 소수 찾기 풀이
//		for (int i = end; i <= N; i++)
//			if (flag[i])
//				if (is_prime_number(i))
//					for (int j = 2; j <= (N) / i; j++)
//						flag[i*j] = false;
//				else
//					flag[i] = false;
//		if (end < N)
//			end = N;
//		// 소수간의 차가 작으려면 작은 소수가 최대한 커야하고
//		// 큰 소수가 최대한 작아야 한다.
//		// 작은 소수가 최대한 클 경우는 N/2 이며
//		// 작은소수 + 큰소수 = N 이므로 다음과 같은 수식이 완성된다.
//		for (int i = N/2; i > 1; i--)
//			if (flag[i] && flag[N - i])
//			{
//				cout << i << ' ' << N - i << '\n';
//				break;
//			}
//				
//	}
//
//	return 0;
//}