//#include <vector>
//
//using namespace std;
//
//vector<vector<bool>> make_bitmask(int n)
//{
//	vector<vector<bool>> bitmask;
//
//	int max = 1;
//	for (int i = 0; i < n; i++)
//		max *= 2;
//
//	// 0 to 2^n - 1
//	for (int i = 0; i < max; i++)
//	{
//		vector<bool> submask(n, false);
//		int j = 1;
//		auto iter = submask.begin();
//		while (i >= j)
//		{
//			if (i & j)
//				*iter = true;
//			iter++;
//			j <<= 1;
//		}
//		bitmask.push_back(submask);
//	}
//
//	return bitmask;
//}