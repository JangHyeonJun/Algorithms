//#include <string>
//#include <vector>
//#include <sstream>
//#include <algorithm>
//using namespace std;
//
//string solution(string s) {
//	string answer = "";
//	stringstream ss(s);
//	string sub;
//	vector<int> v;
//
//	while (ss >> sub)
//		v.push_back(stoi(sub));
//	
//	sort(v.begin(), v.end());
//	answer = to_string(v.front()) + ' ' + to_string(v.back());
//
//	return answer;
//}