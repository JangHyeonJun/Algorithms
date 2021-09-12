//#include <string>
//#include <vector>
//#include <sstream>
//#include <map>
//#include <unordered_map>
//
//using namespace std;
//
//const int LastTime = 23 * 60 + 59;
//
//
//vector<string> Split(string s, char deli)
//{
//    vector<string> v;
//    stringstream stream(s);
//    string temp;
//    while (getline(stream, temp, deli)) {
//        v.push_back(temp);
//    }
//
//    return v;
//}
//
//int parseTime(string timeString)
//{
//    auto v = Split(timeString, ':');
//    int hour = stoi(v[0]);
//    int min = stoi(v[1]);
//
//    return hour * 60 + min;
//}
//
//void parseRecords(vector<string>& records)
//{
//    for (auto record : records)
//    {
//        vector<string> v = Split(record, ' ');
//        int time = parseTime(v[0]);
//        int carNum = stoi(v[1]);
//        bool isEnter = v[2] == "IN" ? true : false;
//    }
//}
//
//int getFee(int basicTime, int basicFee, int addTime, int addFee, int stayTime)
//{
//    if (stayTime <= basicTime)
//        return basicFee;
//
//    stayTime -= basicTime;
//    int fee = basicFee;
//    fee += (stayTime / addTime) * addFee;
//
//    fee += stayTime % addTime == 0 ? 0 : addFee;
//
//
//    return fee;
//}
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//    unordered_map<int, int> enterCarTime;
//    unordered_map<int, int> parkingTime;
//    map<int, int> parkingFee;
//
//    for (auto record : records)
//    {
//        vector<string> v = Split(record, ' ');
//        int time = parseTime(v[0]);
//        int carNum = stoi(v[1]);
//
//        // 입차한 적 없음
//        if (enterCarTime.find(carNum) == enterCarTime.end())
//            enterCarTime[carNum] = time;
//        else
//        {
//            int enterTime = enterCarTime[carNum];
//            int stayTime = time - enterTime;
//
//            if (parkingTime.find(carNum) == parkingTime.end())
//                parkingTime[carNum] = 0;
//
//            parkingTime[carNum] += stayTime;
//
//            enterCarTime.erase(carNum);
//        }
//    }
//
//    for (auto remainCar : enterCarTime)
//    {
//        int stayTime = LastTime - remainCar.second;
//
//        if (parkingTime.find(remainCar.first) == parkingTime.end())
//            parkingTime[remainCar.first] = 0;
//
//        parkingTime[remainCar.first] += stayTime;
//    }
//
//    for (auto time : parkingTime)
//    {
//        parkingFee[time.first] += getFee(fees[0], fees[1], fees[2], fees[3], time.second);
//    }
//
//    for (auto fee : parkingFee)
//        answer.push_back(fee.second);
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> fees{ 180, 5000, 10, 600 };
//    vector<string> s{ "05:34 5961 ",
//                      "06:00 0000 ", "06:34 0000 ", "07:59 5961 ", "07:59 0148 ", "18:59 0000 ", "19:09 0148 ", "22:59 5961 ", "23:00 5961" };
//    solution(fees, s);
//}