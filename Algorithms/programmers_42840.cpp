//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> answers) {
//    vector<vector<int>> studentAnswers = { { 1,2,3,4,5 },
//                                                { 2,1,2,3,2,4,2,5 },
//                                                { 3,3,1,1,2,2,4,4,5,5 } };
//    vector<int> scores = { 0,0,0 };
//    
//    for (int i=0; i<answers.size(); i++)
//        for (int j = 0; j < 3; j++)
//        {
//            size_t len = studentAnswers[j].size();
//
//            if (answers[i] == studentAnswers[j][i % len])
//                scores[j]++;
//        }
//
//    auto maxIndex = max_element(scores.begin(), scores.end()) - scores.begin();
//    int max = scores[maxIndex];
//    
//    vector<int> answer;
//    for (int i = 0; i < 3; i++)
//        if (scores[i] == max)
//            answer.push_back(i + 1);
//
//    return answer;
//}
//
//int main()
//{
//    vector<int> v = { 1,1,1,1,1 };
//    solution(v);
//    return 0;
//}
//
//
//
//
//
//
//
//
//////// 이전 풀이
////#include <string>
////#include <vector>
////
////using namespace std;
////
////vector<int> solution(vector<int> answers) {
////	vector<int> answer;
////	int a[5] = { 1,2,3,4,5 };
////	int b[8] = { 2,1,2,3,2,4,2,5 };
////	int c[10] = { 3,3,1,1,2,2,4,4,5,5 };
////
////	int scores[3] = { 0,0,0 };
////
////	for (int i = 0; i < answers.size(); i++)
////	{
////		if (a[i % 5] == answers[i])
////			scores[0]++;
////		if (b[i % 8] == answers[i])
////			scores[1]++;
////		if (c[i % 10] == answers[i])
////			scores[2]++;
////	}
////
////	int max = 0;
////	for (int i = 0; i < 3; i++)
////	{
////		if (max < scores[i])
////			max = scores[i];
////	}
////
////	for (int i = 0; i < 3; i++)
////	{
////		if (scores[i] == max)
////			answer.push_back(i + 1);
////	}
////
////
////	return answer;
////}