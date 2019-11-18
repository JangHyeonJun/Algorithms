//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> A, vector<int> B) {
//	int answer = 0;
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end());
//	if (A.front() > B.back())
//		return 0;
//
//	while (!A.empty())
//	{
//		if (A.back() < B.back())
//		{
//			A.pop_back();
//			B.pop_back();
//			answer++;
//		}
//		else
//			A.pop_back();
//	}
//
//	return answer;
//}
//
//int main()
//{
//	vector<int> v1 = { 5,1,3,7 };
//	vector<int> v2 = { 2,2,6,8 };
//	vector<int> v3 = { 5,4,3,2,1 };
//	vector<int> v4 = { 5,4,3,2,0 };
//	solution(v3, v4);
//
//	return 0;
//}