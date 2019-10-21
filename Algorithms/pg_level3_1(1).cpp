//#include <string>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//
//int solution(vector<int> A, vector<int> B) {
//	int answer = 0;
//	
//	sort(A.begin(), A.end());
//	sort(B.begin(), B.end());
//
//	auto iter_a = A.rbegin();
//	auto iter_b = B.rbegin();
//
//	while (iter_a != A.rend())
//	{
//		if (*iter_a < *iter_b)
//		{
//			answer++;
//			iter_a++;
//			iter_b++;
//		}
//		else
//		{
//			iter_a++;
//		}
//	}
//	return answer;
//}