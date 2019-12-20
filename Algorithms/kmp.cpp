#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> getFail(string s)
{
	vector<int> fail(s.length(), 0);
	int j = 0;
	for (int i = 1; i < s.length() - 1; i++)
	{
		while (j > 0 && s[i] != s[j]) j = s[j - 1];
		if (s[i] == s[j])
			s[i] = ++j;
	}

	return fail;
}

int kmp(string target, string pattern)
{
	vector<int> fail = getFail(pattern);
	int j = 0;
	for (int i = 0; i < target.length(); i++)
	{
		while (j > 0 && target[i] != pattern[j])
			j = fail[j - 1];
		if (target[i] == pattern[j])
		{
			if (j == pattern.length() - 1)
				return i;
			else
				j++;
		}
	}
}

int main()
{
	kmp("abeedeeeef", "eef");
	return 0;
}