//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> getSubset(int n)
//{
//	vector<vector<int>> subsetlist;
//	// 아무것도 구분할 수 없는 경우는 제외하므로
//	for (int i = 1; i < (1 << n); i++)
//	{
//		vector<int> subset;
//		for (int j = 0; j < n; j++)
//			if (i & 1 << j)
//			{
//				subset.push_back(j);
//			}
//		subsetlist.push_back(subset);
//	}
//
//	return subsetlist;
//}
//
//int solution(vector<vector<string>> relation) {
//	int answer = 0;
//	int tuple = relation.size();
//	int attribute = relation[0].size();
//	cout << tuple << ' ' << attribute;
//
//	char flag = 0;
//
//	return answer;
//}
//
//int main()
//{
//	vector<vector<string>> relation = { {"100","ryan","music","2"}, {"200","apeach","math","2"},
//	{"300","tube","computer","3"}, {"400","con","computer","4"}, {"500","muzi","music","3"},
//	{"600","apeach","music","2"} };
//
//	solution(relation);
//
//	getSubset(4);
//
//	return 0;
//}