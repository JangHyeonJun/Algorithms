///*
//비어있지 않은 배열 A는 N개의 정수를 가지고있다.
//(P,Q) 의 인덱스를 가지는 부분 배열 slice로 나눌수있는데
//slice 는 항상 오름차순이어야 한다.
//A[i-1] < A[i] 이런식으로,
//[2,2,2] 는 slice 할 수 없다.
//[2] 는 slice 가능하며 size는 1
//[1,2] 는 slice 가능하며 size는 3
//[-1,2,3] 도 가능 하며 size는 3
//[-1,2,1] 은 불가능
//
//size가 가장 큰 slice의 P 인덱스를 리턴해야한다.
//[2,2,1,2,-1,2] 이면
//[1,2]로 slice 된 인덱스 P = 2
//[-1,2]로 slice 된 인덱스 P = 4 중 하나를
//리턴 하면된다.
//*/
//
//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//#include <unordered_map>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(vector<int> &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	int max_size = 1;
//	int max_begin = 0;
//	int begin = -1;
//	int size = 1;
//	for (int i = 0; i < A.size() - 1; i++)
//	{
//		if (A[i] < A[i + 1])
//		{
//			if (begin == -1)
//				begin = i;
//			size++;
//			if (size > max_size)
//			{
//				max_size = size;
//				max_begin = begin;
//			}
//		}
//		else
//		{
//			begin = -1;
//			size = 1;
//		}
//	}
//
//	return max_begin;
//}
//
////[2, 1, 2, 3, 2, 1]
////[1]
////[5, 4, 3, 2, 1, 2, 3, 2, 1, 2, 3]
////[5, 4, 3, 2, 1, 2, 3, 2, 1, 2, 3, 4]
////[1, 2, 3, 1, 2, 3, 4]
////[1, 2, 3, 4, 1, 2]
////[1, 2, 1, 2, 3, 4, 5, 1, 2, 3, 4]
////[5, 1, 2, 3, 1, 2, 3, 1, 2, 3]
////[5, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 5]