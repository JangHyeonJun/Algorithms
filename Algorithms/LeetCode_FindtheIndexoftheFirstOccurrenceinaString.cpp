#include <string>

using namespace std;

class Solution {
public:
	int strStr(string haystack, string needle) {

		if (needle.length() > haystack.length())
			return -1;

		int result = -1;
		for (int i = 0; i < haystack.length(); i++)
		{
			for (int j = 0; j < needle.length(); j++)
			{
				if (haystack[i + j] != needle[j])
				{
					result = -1;
					break;
				}
				else if (j == 0)
					result = i;
			}

			if (result != -1)
				return result;
		}

		return result;
	}
};

int main()
{
	Solution s;
	s.strStr("mississippi", "issip");

	return 0;
}