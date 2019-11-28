#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int sum = 0;
	int last = 0;
	bool is_minus = false;
	string input;
	cin >> input;
	
	auto iter = input.begin();
	auto prev = iter;

	if (input[0] == '-')
	{
		is_minus = true;
		iter++;
		prev++;
	}
	
	while (iter != input.end())
	{
		if (is_minus)
		{
			if (*iter == '-' || *iter == '+')
			{
				int a = stoi(input.substr(prev - input.begin(), iter - prev));
				sum -= stoi(input.substr(prev - input.begin(), iter - prev));
				iter++;
				prev = iter;
			}
			else
				iter++;
		}
		else
		{
			if (*iter == '-' || *iter == '+')
			{
				if (*iter == '-')
					is_minus = true;
				int a = stoi(input.substr(prev - input.begin(), iter - prev));
				sum += stoi(input.substr(prev - input.begin(), iter - prev));
				iter++;
				prev = iter;
				
			}
			else
				iter++;
		}
	}
	if (is_minus)
		sum -= stoi(input.substr(prev - input.begin(), iter - prev));
	else
		sum += stoi(input.substr(prev - input.begin(), iter - prev));

	
	cout << sum;

	return 0;
}