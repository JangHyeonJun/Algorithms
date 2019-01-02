//#include <iostream>
//
//using namespace std;
//
//bool is_prime_number(int num)
//{
//	if (num < 2)
//		return false;
//	for (int i = 2; i < num; i++)
//		if (num%i == 0)
//			return false;
//	return true;
//}
//
//int main()
//{
//	int input;
//	int count = 0;
//	int N;
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		if (is_prime_number(input))
//			count++;
//	}
//	cout << count << '\n';
//	
//
//	return 0;
//}