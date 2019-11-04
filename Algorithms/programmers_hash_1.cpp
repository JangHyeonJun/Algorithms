//#include <string>
//#include <unordered_set>
//#include <vector>
//
//using namespace std;
//
//string solution(vector<string> participant, vector<string> completion) {
//	string answer = "";
//	unordered_multiset<string> u_set;
//	for (string c_name : completion)
//		u_set.insert(c_name);
//	
//	for (string p_name : participant)
//	{
//		auto finded_name = u_set.find(p_name);
//		if (finded_name != u_set.end())
//			u_set.erase(finded_name);
//		else
//		{
//			answer = p_name;
//			break;
//		}
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<string> a = { "a", "b", "c", "a"};
//	vector<string> b = { "a", "b", "c" };
//	solution(a, b);
//}