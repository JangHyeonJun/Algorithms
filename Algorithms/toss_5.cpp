//#include <string>
//#include <vector>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> fruitWeights, int k) {
//    set<int, greater<int>> sortedAnswer;
//    multiset<int, greater<int>> subSorted;
//
//    if (fruitWeights.size() < k)
//        return { *max(fruitWeights.begin(), fruitWeights.end()) };
//
//
//    for (int i = 0; i < k - 1; i++)
//        subSorted.insert(fruitWeights[i]);
//
//    for (int i = k - 1; i < fruitWeights.size(); i++)
//    {
//        subSorted.insert(fruitWeights[i]);
//        sortedAnswer.insert(*subSorted.begin());
//        subSorted.erase(fruitWeights[i - k + 1]);
//    }
//
//    return vector<int>(sortedAnswer.begin(), sortedAnswer.end());
//}
//
//int main()
//{
//    solution({ 10, 50, 20, 40, 20, 30 }, 3);
//}