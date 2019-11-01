#include <iostream>

using namespace std;

int main()
{
	int n;
	int num = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int apple, student;
		cin >> student >> apple;
		num += apple % student;
	}
	cout << num;
	return 0;
}