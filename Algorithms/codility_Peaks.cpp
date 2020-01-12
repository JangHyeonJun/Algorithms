//#include <vector>
//
//using namespace std;
//
//bool is_include_peak(vector<int> &A, int start, int end)
//{
//	for (int i = start; i < end; i++)
//	{
//		if (i > 0 && i < A.size() - 1)
//			if (A[i] > A[i - 1] && A[i] > A[i + 1])
//				return true;
//	}
//	return false;
//}
//
//
//int solution(vector<int> &A) {
//	// write your code in C++14 (g++ 6.2.0)
//	int size = A.size();
//	int divider = 1;
//	while (divider <= size)
//	{
//		if (size % divider == 0)
//		{
//			bool is_possible = true;
//			for(int i=0; i<size; i+= divider)
//				if (!is_include_peak(A, i, i + divider))
//				{
//					is_possible = false;
//					break;
//				}
//			if (is_possible)
//				return size / divider;
//		}
//		divider++;
//	}
//
//	return 0;
//}
//
//int main()
//{
//	vector<int> v = { 1,2,3,4,3,4,1,2,3,4,6,2 };
//	vector<int> v2 = { 1,3,1,3,1,3,1,3 };
//	solution(v2);
//}