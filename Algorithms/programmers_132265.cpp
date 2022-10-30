//#include <string>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//
//int solution(vector<int> topping) {
//    int answer = 0;
//
//    unordered_map<int, int> um_l, um_r;
//
//    for (auto t : topping)
//    {
//        if (um_r.find(t) == um_r.end())
//            um_r[t] = 1;
//        else
//            um_r[t]++;
//    }
//
//    for (int i = 0; i < topping.size(); i++)
//    {
//        auto t = topping[i];
//
//        if (um_l.find(t) == um_l.end())
//            um_l[t] = 1;
//        else
//            um_l[t]++;
//
//        if (um_r[t] == 1)
//            um_r.erase(t);
//        else
//            um_r[t]--;
//
//        if (um_l.size() == um_r.size())
//            answer++;
//    }
//
//    return answer;
//}