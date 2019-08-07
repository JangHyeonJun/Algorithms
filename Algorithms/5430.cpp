#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<int> makeDQ(string input)
{
	deque<int> dq;
	// remove '[',']'
	input = input.substr(1, input.length() - 1);
	char *slice = _strdup(input.c_str());
	slice = strtok(slice, ",");
	while (slice != NULL)
	{
		dq.push_back(*slice - 48);
		slice = strtok(NULL, ",");
	}

	while (dq.size() > 0)
	{
		cout << dq.front() << '\n';
		dq.pop_front();
	}

	return dq;
}

int main()
{
	string a = "[1,2,3]";
	makeDQ(a);
	//int T;
	//cin >> T;
	//for (int i = 0; i < T; i++)
	//{
	//	string input, arr;
	//	int size;
	//	cin >> input >> size >> arr;
	//}
	return 0;
}