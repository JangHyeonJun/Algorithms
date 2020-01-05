#include <string>
#include <vector>

using namespace std;

void encode(char& c, int n)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 97 + n) % 26 + 97;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = (c - 65 + n) % 26 + 65;
	}
}

string solution(string s, int n) {
	for (char c : s) encode(c, n);
	return s;
}

int main()
{
	solution("AB", 1);
}