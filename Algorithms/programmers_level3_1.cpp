//#include <string>
//#include <vector>
//
//using namespace std;
//
//void hanoi(int depart, int arrival, int stop, int n, vector<vector<int>>& v_list)
//{
//
//	if (n == 1)
//	{
//		vector<int> v;
//		v.push_back(depart);
//		v.push_back(arrival);
//		v_list.push_back(v);
//	}
//	else
//	{
//		hanoi(depart, stop, arrival, n - 1, v_list);
//		hanoi(depart, arrival, stop, 1, v_list);
//		hanoi(stop, arrival, depart, n - 1, v_list);
//	}
//}
//
//vector<vector<int>> solution(int n) {
//	vector<vector<int>> answer;
//	hanoi(1, 3, 2, n, answer);
//	return answer;
//}
//
//int main()
//{
//	solution(3);
//}