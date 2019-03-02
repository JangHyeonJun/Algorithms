#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	stack<int> nums;
	stack<int> seq;
	queue<char> output;

	int stackNum;
	int input[100000];

	cin >> stackNum;

	for (int i = 0; i < stackNum; i++)
		cin >> input[i];

	for (int i = stackNum; i > 0; i--)
		nums.push(i);

	for (int i = 0; i < stackNum; i++)
	{
		while (!nums.empty() && nums.top() <= input[i])
		{

			seq.push(nums.top());
			nums.pop();
			output.push('+');

		}
		while (!seq.empty())
		{
			if (seq.top() >= input[i])
			{
				seq.pop();
				output.push('-');
			}
			else
			{
				cout << "NO" << '\0';
				return 0;
			}
		}
	}

	while (!output.empty())
	{
		cout << output.front() << '\n';
		output.pop();
	}


	return 0;
}