//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxDistToClosest(vector<int>& seats) {
//        vector<int> dists(seats.size(), 99999);
//        bool crossOccupied = false;
//        int dist = 0;
//
//        for (int i = 0; i< dists.size(); i++)
//            if (seats[i])
//            {
//                dists[i] = dist = 0;
//                crossOccupied = true;
//            }
//            else if (crossOccupied)
//                dists[i] = dists[i] < ++dist ? dists[i] : dist;
//
//        dist = 0;
//        crossOccupied = false;
//        for (int i = dists.size() - 1; i >= 0; i--)
//            if (seats[i])
//            {
//                dists[i] = dist = 0;
//                crossOccupied = true;
//            }
//            else if (crossOccupied)
//                dists[i] = dists[i] < ++dist ? dists[i] : dist;
//
//        int maxDist = 1;
//        for (int i = 0; i < dists.size(); i++)
//            if (dists[i] > maxDist)
//                maxDist = dists[i];
//
//        return maxDist;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v = { 1, 0, 0, 0, 1, 0, 1 };
//    vector<int> v2 = { 1, 0, 0, 0 };
//    vector<int> v3 = { 0, 1 };
//    vector<int> v4 = { 1, 0, 0, 0, 0, 0, 1 };
//    cout << s.maxDistToClosest(v) << endl;
//    cout << s.maxDistToClosest(v2) << endl;
//    cout << s.maxDistToClosest(v3) << endl;
//    cout << s.maxDistToClosest(v4) << endl;
//
//    return 0;
//}