//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//string isValid(string s)
//{
//	unordered_map<char, int> um;
//	unordered_map<int, int> um_count;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (um.find(s[i]) == um.end())
//			um[s[i]] = 1;
//		else
//			um[s[i]]++;
//	}
//
//	for (auto iter = um.begin(); iter != um.end(); iter++)
//		if (um_count.find(iter->second) == um_count.end())
//			um_count[iter->second] = 1;
//		else
//			um_count[iter->second]++;
//
//	if (um_count.size() == 1)
//		return "YES";
//	else if (um_count.size() == 2)
//	{
//		auto fir = um_count.begin();
//		auto sec = ++um_count.begin();
//		if (fir->first - sec->first == 1 && fir->second == 1)
//			return "YES";
//		if (sec->first - fir->first == 1 && sec->second == 1)
//			return "YES";
//		if (fir->first == 1 && fir->second == 1)
//			return "YES";
//		if (sec->first == 1 && sec->second == 1)
//			return "YES";
//	}
//
//	return "NO";
//} 
//
//int main()
//{
//	string s = isValid("abcdefghhgfedecba");
//
//	return 0;
//}