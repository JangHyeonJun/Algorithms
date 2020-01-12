//// you can use includes, for example:
//// #include <algorithm>
//
//// you can write to stdout for debugging purposes, e.g.
//// cout << "this is a debug message" << endl;
//
//int solution(int N) {
//	// write your code in C++14 (g++ 6.2.0)
//	int divider = 1;
//	int min_divider = 1;
//	while (divider <= N / divider)
//	{
//		if (N % divider == 0)
//			min_divider = divider;
//		divider++;
//	}
//
//	return 2 * (min_divider + N / min_divider);
//}