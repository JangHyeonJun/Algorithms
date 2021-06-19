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
//    int depth = 0;
//    queue<pair<int, int>> q;
//    q.push(make_pair(0, N));
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
//            if (pair.first + pair.second == goal)
//                return depth;
// 
//
//            temp.push(make_pair(sum + N, 0));
//            temp.push(make_pair(sum - N, 0));
//            temp.push(make_pair(sum * N, 0));
//            temp.push(make_pair(sum / N, 0));
//			temp.push(make_pair(pair.first, pair.second * 10 + N));
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
//    solution(2, 11);
//
//    return 0;
//}