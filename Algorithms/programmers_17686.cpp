//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//string get_head(const string& s)
//{
//	int i;
//	for (i = 0; i < s.length(); i++)
//		if (s[i] <= '9' && s[i] >= '0')
//			break;
//	return s.substr(0, i);
//}
//int get_num(const string& s)
//{
//	int begin, end;
//	for (begin = 0; begin < s.length(); begin++)
//		if (s[begin] <= '9' && s[begin] >= '0')
//			break;
//	for (end = begin; end < s.length(); end++)
//		if (end - begin >= 5 || (s[end] > '9' && s[end] < '0'))
//			break;
//
//	int num = stoi(s.substr(begin, end - begin));
//	return num;
//}
//
//string get_lower_string(string s)
//{
//	string lower(s);
//	for (int i = 0; i < s.length(); i++)
//		if (lower[i] <= 'Z' && lower[i] >= 'A')
//			lower[i]+= 32;
//	return lower;
//}
//
//struct Compare
//{
//	bool operator()(string s1, string s2)
//	{
//		string head_s1 = get_lower_string(get_head(s1));
//		string head_s2 = get_lower_string(get_head(s2));
//		int num_s1 = get_num(s1);
//		int num_s2 = get_num(s2);
//		if (head_s1 == head_s2)
//			return num_s1 < num_s2;
//		else
//			return head_s1 < head_s2;
//	}
//};
//
//vector<string> solution(vector<string> files)
//{
//	stable_sort(files.begin(), files.end(), Compare());
//
//	return files;
//}
//
//int main()
//{
//	vector<string> v = { "F-5 Freedom Fighter", "B-50 Superfortress", "A-10 Thunderbolt II", "F-14 Tomcat" };
//	vector<string> v2 = { "img12.png", "img10.png", "img02.png", "img1.png", "IMG01.GIF", "img2.JPG" };
//	vector<string> t = { "IMG99998","img999979", "iMg9999699" };
//	vector<string> t2 = { "MUZI01.zip", "muzi1.png", "ver-10.zip", "ver-9.zip" };
//	solution(t2);
//}