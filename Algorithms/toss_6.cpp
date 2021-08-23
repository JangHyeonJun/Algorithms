//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int numOfStairs) {
//	long long answer = 0;
//	vector<long long> answers(numOfStairs, 0);
//	answers[0] = 1;
//	answers[1] = 2;
//	answers[2] = 4;
//	for (int i = 3; i < answers.size(); i++)
//		answers[i] = answers[i - 1] + answers[i - 2] + answers[i - 3];
//	return answers[numOfStairs - 1];
//}
//
//int main()
//{
//	solution(4);
//
//	return 0;
//}