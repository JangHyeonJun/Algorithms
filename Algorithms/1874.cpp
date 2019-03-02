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
	bool error = true;

	cin >> stackNum;

	for (int i = 0; i < stackNum; i++)
		cin >> input[i];

	for (int i = stackNum; i > 0; i--)
		nums.push(i);

	for (int i = 0; i < stackNum; i++)
	{
		error = true;

		while (!nums.empty() && nums.top() <= input[i])
		{
			seq.push(nums.top());
			nums.pop();
			output.push('+');
		}
		while (!seq.empty())
		{
			if (seq.top() == input[i])
			{
				seq.pop();
				output.push('-');
				error = false;
				break;
			}
			else
			{
				seq.pop();
				output.push('-');
			}
		}
		if (error)
		{
			cout << "NO" << '\0';
			return 0;
		}
	}

	if(!output.empty())
	{
	cout << output.front();
	output.pop();
	}
	while (!output.empty())
	{
		cout << '\n' << output.front();
		output.pop();
	}


	return 0;
}