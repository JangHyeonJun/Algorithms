//#include <iostream>
//#include <string>
//#include <algorithm>
//
//int main()
//{
//	int sum = 0;
//	int last = 0;
//	bool firstMinus = false;
//	std::string input;
//	std::cin >> input;
//
//	for (int i = 0; i < input.length(); i++)
//	{
//		if (!firstMinus)
//		{
//			if (input[i] == '+')
//			{
//				sum += atoi(input.substr(last, i - last).c_str());
//				last = i + 1;
//			}
//			else if (input[i] == '-')
//			{
//				sum += atoi(input.substr(last, i - last).c_str());
//				last = i + 1;
//				firstMinus = true;
//			}
//			else
//				continue;
//		}
//		else
//		{
//			if (input[i] == '+' || input[i] == '-')
//			{
//				sum -= atoi(input.substr(last, i - last).c_str());
//				last = i + 1;
//			}
//		}
//	}
//	if(firstMinus)
//		sum -= atoi(input.substr(last, input.length() - last + 1).c_str());
//	else
//		sum += atoi(input.substr(last, input.length() - last + 1).c_str());
//
//	std::cout << sum;
//
//	return 0;
//}