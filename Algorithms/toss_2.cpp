//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//vector<vector<int>> solution(int servers, bool sticky, vector<int> requests) {
//    vector<vector<int>> answers(servers, vector<int>());
//    unordered_map<int, int> cash;
//    
//    for (auto& answer : answers)
//        answer.reserve(requests.size() / servers);
//    
//    int serverIndex = 0;
//
//    for (int i = 0; i < requests.size(); i++)
//    {
//        if (sticky)
//        {
//            auto iter = cash.find(requests[i]);
//            if (iter != cash.end())
//                answers[iter->second].push_back(requests[i]);
//            else
//            {
//                answers[serverIndex].push_back(requests[i]);
//                cash[requests[i]] = serverIndex;
//                serverIndex++;
//            }
//        }
//        else
//        {
//            answers[serverIndex].push_back(requests[i]);
//            serverIndex++;
//        }
//
//        serverIndex %= servers;
//
//    }
//
//    return answers;
//}
//
//int main()
//{
//    //solution(4, false, { 1,2,3,4,1,2,3,4 });
//    solution(2, true, { 1,1,2,2 });
//}