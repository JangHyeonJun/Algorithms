//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(int n) {
//	vector<int> curr = { 0 };
//	for (int i = 1; i < n; i++)
//	{
//		vector<int> temp(curr);
//		temp[temp.size() / 2] = 1;
//		curr.push_back(0);
//		curr.insert(curr.end(), temp.begin(), temp.end());
//	}
//	return curr;
//}