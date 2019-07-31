//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int t, n;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		cin >> n;
//		vector<pair<int, string>> typeNum;
//		int sum = 1;
//		for (int j = 0; j < n; j++)
//		{
//			string type;
//			cin >> type >> type;
//			bool isCase = false;
//			for (int k = 0; k < typeNum.size(); k++)
//			{
//				if (typeNum[k].second == type)
//				{
//					typeNum[k].first++;
//					isCase = true;
//					break;
//				}
//			}
//			if (!isCase)
//			{
//				typeNum.push_back(pair<int, string>(1, type));
//			}
//		}
//
//		for (int j = 0; j < typeNum.size(); j++)
//			sum *= typeNum[j].first + 1;
//		cout << sum - 1 << '\n';
//	}
//
//	return 0;
//}