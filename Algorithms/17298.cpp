//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	int *arr = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//
//	stack<int> result;
//	vector<int> max;
//	result.push(-1);
//	for (int i = n-2; i >= 0; i--)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			max.push_back(arr[i + 1]);
//			result.push(max.back());
//		}
//		else
//		{
//			if (!max.empty() && arr[i] < max.back())
//				result.push(max.back());
//			else
//			{
//				while (!max.empty())
//				{
//					if (arr[i] < max.back())
//					{
//						result.push(max.back());
//						break;
//					}
//					else
//					{
//						max.pop_back();
//					}
//				}
//
//				if (max.empty())
//				{
//					max.push_back(arr[i]);
//					result.push(-1);
//				}
//			}
//		}
//	}
//	while (!result.empty())
//	{
//		cout << result.top() << ' ';
//		result.pop();
//	}
//
//	delete[] arr;
//
//	return 0;
//}