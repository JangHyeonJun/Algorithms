//#include <string>
//#include <vector>
//
//using namespace std;
//
//int countOneBinary(int n)
//{
//	int count = 0;
//	int b = 1;
//	while (b < n)
//	{
//		if (b & n)
//			count++;
//		b <<= 1;
//	}
//
//	return count;
//}
//
//
//int solution(int n) {
//	int answer = n;
//	int nCount = countOneBinary(n);
//	while (true)
//	{
//		answer++;
//		if (nCount == countOneBinary(answer))
//			break;
//	}
//	return answer;
//}