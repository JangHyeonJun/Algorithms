//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n, m;
//		vector<int> num;
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//		{
//			int input;
//			cin >> input;
//			num.push_back(input);
//		}
//
//		int overNum[10] = { 0, }; // 높은 중요도 갯수
//		int printCount = 0;
//		int numLevel = num[m];
//		int currLevel = numLevel;
//		for (int i = 0; i < n; i++)
//			if (num[i] > numLevel)
//			{
//				overNum[num[i]]++;
//				if (currLevel < num[i])
//					currLevel = num[i];
//			}
//		num[m] = -1;
//		while (currLevel > numLevel)
//		{
//			if (overNum[currLevel] < 1)
//			{
//				currLevel--;
//				continue;
//			}
//
//			if (num.front() == currLevel)
//			{
//				num.erase(num.begin());
//				overNum[currLevel]--;
//				printCount++;
//			}
//			else
//			{
//				num.push_back(num.front());
//				num.erase(num.begin());
//			}
//
//		}
//		while (true)
//		{
//			if (num.front() == -1)
//			{
//				printCount++;
//				break;
//			}
//			else if (num.front() == numLevel)
//			{
//				num.erase(num.begin());
//				printCount++;
//			}
//			else
//			{
//				num.push_back(num.front());
//				num.erase(num.begin());
//			}
//		}
//		cout << printCount << '\n';
//	}
//}