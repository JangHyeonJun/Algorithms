//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//int main()
//{
//	int p = 1987;
//
//	while (true)
//	{
//		bool b = true;
//		p++;
//		int temp = p;
//		vector<int> v(4);
//		for (int i = 3; i >= 0; i--)
//		{
//			v[i] = temp % 10;
//			temp /= 10;
//		}
//		for (int i = 0; i < 4; i++)
//			for (int j = i+1; j < 4; j++)
//				if (v[i] == v[j])
//					b = false;
//		if (b)
//			cout << p;
//	}
//
//	return 0;
//}