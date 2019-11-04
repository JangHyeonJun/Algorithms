//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> progresses, vector<int> speeds) {
//	vector<int> answer;
//	int index = 0;
//	while (index < progresses.size())
//	{
//		int count = 0;
//		while (index < progresses.size() && progresses[index] >= 100)
//		{
//			count++;
//			index++;
//		}
//		if (count > 0)
//			answer.push_back(count);
//
//		for (int i = 0; i < progresses.size(); i++)
//			progresses[i] += speeds[i];
//	}
//	return answer;
//}