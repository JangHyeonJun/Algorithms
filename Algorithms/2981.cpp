#include <iostream>
#include <algorithm>
#include <math.h>

bool comp(const int a, const int b)
{
	if (a < b)
		return true;
	else
		return false;
}

// 유클리드 호제법 사용
int findGCD(int a, int b)
{
	int gcd;
	while (a%b != 0)
	{
		gcd = a % b;
		a = b;
		b = gcd;
	}
	
	return b;
}

int main()
{
	int n;
	std::cin >> n;

	int num[100];
	int gcd;

	for (int i = 0; i < n; i++)
		std::cin >> num[i];

	std::sort(num, num + n, comp);

	gcd = num[1] - num[0];
	for (int i = 2; i < n; i++)
	{
		gcd = findGCD(gcd, num[i] - num[i-1]);
	}

	for (int i = 2; i <= gcd; i++)
		if (gcd % i == 0)
			std::cout << i << ' ';

	return 0;
}