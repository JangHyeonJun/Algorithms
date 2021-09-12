//#include <string>
//#include <vector>
//#include <sstream>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//void InitInfo(unordered_map<string, int>& count, unordered_map<string, unordered_set<string>>& reportedInfo, const vector<string>& id_list)
//{
//    for (auto id : id_list)
//    {
//        reportedInfo[id] = unordered_set<string>();
//        count[id] = 0;
//    }
//}
//
//vector<string> splitName(string s)
//{
//    vector<string> names;
//    stringstream stream(s);
//    string temp;
//    while (getline(stream, temp, ' ')) {
//        names.push_back(temp);
//    }
//
//    return names;
//}
//
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//    vector<int> answer;
//
//    unordered_map<string, unordered_set<string>> reportedInfo;
//    unordered_map<string, int> count;
//    InitInfo(count, reportedInfo, id_list);
//
//    for (auto r : report)
//    {
//        auto names = splitName(r);
//        string reporter = names[0];
//        string target = names[1];
//
//        reportedInfo[target].insert(reporter);
//    }
//
//    for (auto info : reportedInfo)
//    {
//        auto reporterList = info.second;
//        if (reporterList.size() >= k)
//        {
//            for (auto reporter : reporterList)
//            {
//                count[reporter]++;
//            }
//        }
//    }
//
//    for (auto id : id_list)
//    {
//        answer.push_back(count[id]);
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<string> v{ "a", "b", "c" };
//    vector<string> v2{ "a b", "a c", "b c", "c b" };
//    solution(v, v2, 2);
//    return 0;
//}