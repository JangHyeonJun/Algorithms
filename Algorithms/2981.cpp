#include <iostream>
#include <algorithm>

bool comp(const int a, const int b)
{
	if (a < b)
		return true;
	else
		return false;
}

int main()
{
	int n;
	std::cin >> n;

	int *num = new int[n];
	int min = 0;

	for (int i = 0; i < n; i++)
		std::cin >> num[i];

	std::sort(num, num + n, comp);

	for (int i = 0; i < n - 1; i++)
		num[i] = num[i + 1] - num[i];

	for (int i = num[0]; i > 1; i--)
	{
		bool flag = true;
		for(int j=0; j<n-1; j++)
			if (num[j] % i != 0)
			{
				flag = false;
				break;
			}

		if (flag)
		{
			min = i;
			break;
		}
	}

	for (int i = 2; i <= min; i++)
	{
		if (min%i == 0)
			std::cout << i << ' ';
	}

	delete[] num;

	return 0;
}