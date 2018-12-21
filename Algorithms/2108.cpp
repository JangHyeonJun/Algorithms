//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main()
//{
//	int N, input;
//	double sum = 0;
//	int mean = 0, median = 0, mode = 1, range = 0, order = 0;
//	queue<int> modeNum;
//	int min = 4001;
//	int max = -4001;
//	int num[8001] = { 0, };
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> input;
//		sum += input;
//		num[input + 4000]++;
//		if (mode < num[input + 4000])
//			mode = num[input + 4000];
//	}
//
//	
//	// Áß¾Ó°ª, Â÷ÀÌ
//	for (int i = 0; i < 8001; i++)
//	{
//		if (mode == num[i])
//			modeNum.push(i-4000);
//
//		if (num[i] > 0)
//		{
//			if (min > (i - 4000))
//				min = i - 4000;
//			if (max < (i - 4000))
//				max = i - 4000;
//		}
//		for (int j = 0; j < num[i]; j++)
//		{
//			order++;
//			if (order == (N + 1) / 2)
//				median += i - 4000;
//		}
//	}
//
//	// ÃÖºó°ª
//	if (modeNum.size() > 1)
//		modeNum.pop();
//
//	// »ê¼ú Æò±Õ
//	if (sum < 0)
//		mean = (int)((sum / N) - 0.5);
//	else
//		mean = (int)((sum / N) + 0.5);
//
//
//	range = max - min;
//
//	cout << mean << '\n' << median << '\n' << modeNum.front() << '\n' << range << '\n';
//
//	return 0;
//}