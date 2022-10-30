//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> queue1, vector<int> queue2) {
//    int answer = 0;
//
//    vector<int> unionQueue;
//    unionQueue.insert(unionQueue.end(), queue1.begin(), queue1.end());
//    unionQueue.insert(unionQueue.end(), queue2.begin(), queue2.end());
//
//    long long target, sum1, sum2, l, r;
//    sum1 = sum2 = l = 0;
//    r = queue1.size() - 1;
//
//    for (auto n : queue1)
//        sum1 += n;
//    for (auto n : queue2)
//        sum2 += n;
//
//    target = (sum1 + sum2) / 2;
//
//    while (l <= r)
//    {
//        if (sum1 == target)
//            break;
//
//        if (sum1 < target)
//        {
//            if (r >= unionQueue.size() - 1)
//                return -1;
//
//            r++;
//            sum1 += unionQueue[r];
//        }
//        else
//        {
//            if (l == r)
//                return -1;
//
//            sum1 -= unionQueue[l];
//            l++;
//        }
//
//        answer++;
//    }
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> v1 = { 1, 1 };
//    vector<int> v2 = { 1, 5 };
//
//    solution(v1, v2);
//}