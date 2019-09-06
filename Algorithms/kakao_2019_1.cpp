//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <sstream>
//using namespace std;
//
//vector<string> solution(vector<string> record) {
//	vector<string> answer;
//	map<string, string> m;
//	for (int i = 0; i < record.size(); i++)
//	{
//		stringstream ss(record[i]);
//		string enterLeave, id, name;
//		ss >> enterLeave >> id >> name;
//		if(enterLeave == "Enter" || enterLeave == "Change")
//			m[id] = name;
//	}
//	for (int i = 0; i < record.size(); i++)
//	{
//		stringstream ss(record[i]);
//		string enterLeave, id, name;
//		ss >> enterLeave >> id >> name;
//		if(enterLeave == "Enter")
//			answer.push_back(m[id] + "님이 들어왔습니다.");
//		else if(enterLeave == "Leave")
//			answer.push_back(m[id] + "님이 나갔습니다.");
//	}
//	return answer;
//}
//
//int main()
//{
//	vector<string> _record;
//	vector<string> _answer;
//	_record.push_back("Enter uid1234 Muzi");
//	_record.push_back("Enter uid4567 Prodo");
//	_record.push_back("Leave uid1234");
//	_record.push_back("Enter uid1234 Prodo");
//	_record.push_back("Change uid4567 Ryan");
//	_record.push_back("Enter uid2244 Yuna");
//
//	_answer = solution(_record);
//
//	for (int i = 0; i < _answer.size(); i++)
//		cout << _answer[i] << endl;
//
//	return 0;
//}