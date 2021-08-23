//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(vector<vector<int>> scores) {
//	string answer = "";
//
//	for (int i = 0; i < scores.size(); i++)
//	{
//		int sum = 0;
//		int min = 101;
//		int max = -1;
//		int avg;
//
//		for (int j = 0; j < scores.size(); j++)
//			if (i != j)
//			{
//				sum += scores[j][i];
//				if (scores[j][i] < min)
//					min = scores[j][i];
//				if (scores[j][i] > max)
//					max = scores[j][i];
//			}
//
//		if (scores[i][i] >= min && scores[i][i] <= max)
//			avg = (sum + scores[i][i]) / scores.size();
//		else
//			avg = sum / (scores.size() - 1);
//
//		if (avg >= 90)
//			answer += 'A';
//		else if (avg >= 80)
//			answer += 'B';
//		else if (avg >= 70)
//			answer += 'C';
//		else if (avg >= 50)
//			answer += 'D';
//		else
//			answer += 'F';
//	}
//
//	return answer;
//}