//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//
//int solution(int N) {
//	// write your code in C++14 (g++ 6.2.0)
//	int count = 0;
//	int i = 1;
//	while (N / i >= i)
//	{
//		if (N%i == 0)
//		{
//			if (N / i == i)
//				count++;
//			else
//				count += 2;
//		}
//		i++;
//	}
//
//	return count;
//}