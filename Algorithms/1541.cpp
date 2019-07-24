#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int sum = 0;
	std::string input;
	std::cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (sum == 0)
			if (input[i] == '+' || input[i] == '-')
				sum = atoi(input.substr(0, i).c_str());

	}
	return 0;
}