#include <iostream>

using namespace std;

long long factorial(long long n)
{
	if (n == 0)
		return 1;
	int num = 1;
	for (int i = 2; i <= n; i++)
		num *= i;
	return num;
}

long long set(long long n, long long m)
{
	long long num1 = 1;
	long long num2 = 1;
	if (n > m-n)
	{
		for (int i = n + 1; i <= m; i++)
			num1 *= i;
		for (int i = 2; i <= (m - n); i++)
			num2 *= i;
	}
	else
	{
		for (int i = n + 1; i <= m; i++)
			num2 *= i;
		for (int i = 2; i <= (m - n); i++)
			num1 *= i;
	}

	return num1 / num2;
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n, m;
		cin >> n >> m;
		cout << set(n, m) << '\n';
	}

	return 0;
}