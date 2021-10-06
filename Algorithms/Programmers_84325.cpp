//#include <string>
//#include <vector>
//#include <sstream>
//#include <unordered_map>
//
//using namespace std;
//
//vector<string> Split(const string& s, const char& delim)
//{
//    vector<string> names;
//    stringstream stream(s);
//    string temp;
//    while (getline(stream, temp, delim)) {
//        names.push_back(temp);
//    }
//
//    return names;
//}
//
//string solution(vector<string> table, vector<string> languages, vector<int> preference) {
//    string answer = "";
//
//    int maxSum = 0;
//    string fitJob;
//    unordered_map<string, unordered_map<string, int>> langPreferByJob;
//
//    for (auto s : table)
//    {
//        auto splitString = Split(s, ' ');
//        string job = splitString[0];
//
//        unordered_map<string, int> langPrefer;
//        for (int i = 1; i < splitString.size(); i++)
//            langPrefer[splitString[i]] = splitString.size() - i;
//
//        langPreferByJob[job] = langPrefer;
//    }
//
//    for (auto iter = langPreferByJob.begin(); iter != langPreferByJob.end(); iter++)
//    {
//        int sum = 0;
//        for (int i=0; i < languages.size(); i++)
//            sum += iter->second[languages[i]] * preference[i];
//
//        if (sum == maxSum && iter->first < fitJob)
//            fitJob = iter->first;
//        else if (sum > maxSum)
//        {
//            maxSum = sum;
//            fitJob = iter->first;
//        }
//    }
//
//
//    return fitJob;
//}