//#include <iostream>
//
//using namespace std;
//const int max_num = 100000;
//bool arr[max_num + 1];
//int G, P;
//
//bool binary_docking(int max, int low = 1)
//{
//	if (max < low)
//		return false;
//	if (!arr[max])
//	{
//		arr[max] = true;
//		return true;
//	}
//	
//	int middle = (max + low) / 2;
//
//	if (!arr[middle])
//		return binary_docking(max - 1, middle);
//	else
//		return binary_docking(middle - 1, low);
//}
//
//
//int main()
//{
//	cin.tie(0);
//	ios::sync_with_stdio(false);
//	int count = 0;
//	cin >> G >> P;
//
//	for (int i = 1; i <= P; i++)
//	{
//		int n;
//		cin >> n;
//		if (binary_docking(n))
//			count++;
//		else
//			break;
//	}
//
//	cout << count;
//
//	return 0;
//}