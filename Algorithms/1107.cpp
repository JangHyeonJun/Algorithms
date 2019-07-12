//#include<iostream>
//using namespace std;
//
//int nearestChannelByNumButton(bool *buttons, int channel)
//{
//	int min = 2000000;
//	for (int i = 0; i <= 999999; i++)
//	{
//		bool flag = true;
//
//		// check availability
//		int buf = i;
//		while (buf >= 0)
//		{
//			if (!buttons[buf % 10])
//			{
//				flag = false;
//				break;
//			}
//			
//			if (buf >= 10)
//				buf /= 10;
//			else
//				break;
//		}
//
//		if (flag)
//		{
//			if (abs(channel - i) < abs(channel - min))
//				min = i;
//		}
//
//	}
//
//	return min;
//}
//
//int main()
//{
//	int N, M;
//	bool buttons[10];
//	for (int i = 0; i < 10; i++)
//		buttons[i] = true;
//
//	cin >> N >> M;
//
//	// if all buttons are unavailable
//	if (M == 10)
//	{
//		cout << abs(N - 100);
//		return 0;
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		int buf;
//		cin >> buf;;
//		buttons[buf] = false;
//	}
//
//	int byButton = nearestChannelByNumButton(buttons, N);
//	int count = abs(N - byButton) + 1;
//	while (byButton >= 10)
//	{
//		count++;
//		byButton /= 10;
//	}
//
//	if (abs(N - 100) < count)
//		count = abs(N - 100);
//
//	cout << count;
//
//	return 0;
//}