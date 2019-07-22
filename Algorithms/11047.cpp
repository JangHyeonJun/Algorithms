//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i, n, k, num= 0;
//	cin >> n >> k;
//
//	int *value = new int[n];
//	
//	for (i = 0; i < n; i++)
//		cin >> value[i];
//
//	i = n-1;
//	while (k > 0)
//	{
//		if (k >= value[i])
//		{
//			k -= value[i];
//			num++;
//		}
//		else
//			if (i > 0)
//				i--;
//	}
//
//	cout << num;
//
//	return 0;
//}