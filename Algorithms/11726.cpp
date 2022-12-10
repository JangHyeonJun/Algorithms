//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//
//int FindNumberOfCase(int n)
//{
//
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//
//	vector<int> v(n);
//	v[0] = 1;
//	v[1] = 2;
//
//	for (int i = 0; i < v.size() - 2; i++)
//		v[i + 2] = (v[i] + v[i + 1]) % 10007;
//
//	return v[n - 1];
//}
//
//int main()
//{
//
//	int n;
//	cin >> n;
//
//	cout << FindNumberOfCase(n);
//
//	return 0;
//}