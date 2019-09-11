//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//bool checkNum(int num, int n)
//{
//	bool check[10];
//
//	// check overlap
//	for (int i=0; i< 10; i++)
//		check[i] = false;
//
//	while (num > 0)
//	{
//		if (check[num % 10] || num % 10 > n || num % 10 == 0)
//			return false;
//		check[num % 10] = true;
//		num /= 10;
//	}
//
//	return true;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie();
//	int n, m;
//	cin >> n >> m;
//	int num = 1;
//	int max = n;
//	for (int i = 1; i < m; i++)
//	{
//		num = num * 10 + 1;
//		max = max * 10 + max;
//	}
//
//	while (num <= max)
//	{
//		bool check = checkNum(num, n);
//
//		if (check)
//		{
//			string s = to_string(num);
//			for (int i = 0; i < s.length(); i++)
//				cout << s[i] << ' ';
//			cout << '\n';
//		}
//		
//		num++;
//	}
//
//	return 0;
//}