#include <iostream>
#include <string.h>

using namespace std;

bool is_prime_number(int num)
{
	if (num < 2)
		return false;
	for (int i = 2; i*i <= num; i++)
		if (num%i == 0)
			return false;
	return true;
}

int main()
{
	int T;
	int N;
	int end = 1;
	bool flag[1000001] = { true, };
	memset(flag, true, sizeof(flag));

	cin >> T;
	for (int t=0; t<T; t++)
	{
		cin >> N;
		if (N == 0)
			break;
		// 에라토스테네스의 체를 사용하여 소수 찾기 풀이
		for (int i = end; i <= N; i++)
			if (flag[i])
				if (is_prime_number(i))
					for (int j = 2; j <= (N) / i; j++)
						flag[i*j] = false;
				else
					flag[i] = false;
		if (end < N)
			end = N;
	}

	return 0;
}