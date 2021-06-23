//#include <string>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//
//int bfs(int N, int goal)
//{
//    if (N == goal)
//        return 1;
//
//    int depth = -1;
//    queue<pair<int, int>> q;
//    q.push(make_pair(0, 0));
//
//    while (!q.empty())
//    {
//        depth++;
//        if (depth > 8)
//            break;
//
//        queue<pair<int, int>> temp;
//
//        while (!q.empty())
//        {
//            auto pair = q.front();
//            q.pop();        
//
//            if (pair.first == goal)
//                return depth;
//            pair.second = pair.second * 10 + N;
//
//			temp.push(make_pair(pair.first + pair.second, 0));
//			temp.push(make_pair(pair.first - pair.second, 0));
//			temp.push(make_pair(pair.first * pair.second, 0));
//			temp.push(make_pair(pair.first / pair.second, 0));
//			temp.push(make_pair(pair.first, pair.second));
//        }
//
//        q = temp;
//    }
//
//    return -1;
//}
//
//int solution(int N, int number) {
//    return bfs(N, number);
//}
//
//int main()
//{
//    solution(5, 50);
//
//    return 0;
//}