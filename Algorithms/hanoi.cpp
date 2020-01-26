//#include <iostream>
//
//using namespace std;
//
//void hanoi(int n, int from = 1, int by = 2, int to = 3)
//{
//	if (n == 1)
//		cout << from << " -> " << to << endl;
//	else
//	{
//		hanoi(n - 1, from, to, by);
//		cout << from << " -> " << to << endl;
//		hanoi(n - 1, by, from, to);
//	}
//}
//
//int main()
//{
//	hanoi(3);
//	return 0;
//}