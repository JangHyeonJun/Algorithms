//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> parent;
//
//int find_parent(int n)
//{
//    if (n == parent[n])
//        return n;
//    return parent[n] = find_parent(parent[n]);
//}
//
//bool union_parent(int a, int b)
//{
//    int pA = find_parent(a);
//    int pB = find_parent(b);
//
//    if (pA == pB)
//        return false;
//
//    parent[pB] = pA;
//
//    return true;
//}
//
//int solution(int n, vector<vector<int>> costs) {
//    int answer = 0;
//
//    sort(costs.begin(), costs.end(),
//        [](const vector<int>& a, const vector<int>& b){ return a[2] < b[2]; });
//
//    parent.reserve(n);
//    for (int i = 0; i < n; i++)
//        parent.push_back(i);
//
//    for (auto const& cost : costs)
//        if (union_parent(cost[0], cost[1]))
//            answer += cost[2];
//
//    return answer;
//}
//
//int main()
//{
//    vector<vector<int>> v1 = { {0,1,1}, {0,2,2}, {1,2,5}, {1,3,1}, {2,3,8} };
//    int n1 = 4;
//    vector<vector<int>> v2 = { {0,1,5}, {1,2,3}, {2,3,3}, {3,1,2}, {3,0,4}, {2,4,6}, {4,0,7} };
//    int n2 = 5;
//    vector<vector<int>> v3 = { {0,1,1}, {3,4,1}, {1,2,2}, {2,3,4} };
//    int n3 = 5;
//    vector<vector<int>> v4 = { {0,1,5}, {1,2,3}, {2,3,3}, {1,3,2}, {0,3,4} };
//    int n4 = 4;
//    auto answer = solution(n4, v4);
//    return 0;
//}