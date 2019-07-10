//#include<iostream>
//
//using namespace std;
//
//int bruteForce(int *card, int num, int max)
//{
//	int sum = 0;
//	int nearestSum = 0;
//
//	for (int i = 0; i < num - 2; i++)
//	{
//		for (int j = i+1; j < num - 1; j++)
//		{
//			for (int k = j+1; k < num; k++)
//			{
//				sum = card[i] + card[j] + card[k];
//				if (sum == max)
//					return max;
//				if (sum < max && (max - sum) < (max - nearestSum))
//					nearestSum = sum;
//			}
//		}
//	}
//
//	return nearestSum;
//}
//
//int main()
//{
//	int N, M;
//	cin >> N >> M;
//	int *card = new int[N];
//
//	for (int i = 0; i < N; i++)
//		cin >> card[i];
//
//	cout << bruteForce(card, N, M);
//	delete[] card;
//
//	return 0;
//}