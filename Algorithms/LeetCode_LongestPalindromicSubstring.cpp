#include <string>

using namespace std;

class Solution {
private:
	string getMaxPalindrome(const string& s, int l, int r)
	{
		while (l >= 0 && r < s.length())
		{
			if (s[l] != s[r])
				break;
			l--;
			r++;
		}
		l++;

		return s.substr(l, r - l);
	}
public:

	string longestPalindrome(string s) {
		string maxPalindrome;
		if (s.empty())
			return "";

		maxPalindrome = s[0];

		for (int i = 0; i < s.length() - 1; i++)
		{
			string p;
			if (i + 1 < s.length() && s[i] == s[i + 1])
			{
				p = getMaxPalindrome(s, i, i + 1);
				if (p.length() > maxPalindrome.length())
					maxPalindrome = p;
			}

			if (i + 2 < s.length() && s[i] == s[i + 2])
			{
				p = getMaxPalindrome(s, i, i + 2);
				if (p.length() > maxPalindrome.length())
					maxPalindrome = p;
			}
		}

		return maxPalindrome;
	}
};

int main()
{
	Solution s;
	auto result = s.longestPalindrome("aacabdkacaa");
	auto result2 = s.longestPalindrome("aaaa");
	auto result3 = s.longestPalindrome("123123454321");
	auto result4 = s.longestPalindrome("1231221321");
	auto result5 = s.longestPalindrome("1232111111");
	auto result6 = s.longestPalindrome("1");
	auto result7 = s.longestPalindrome("");

	return 0;
}