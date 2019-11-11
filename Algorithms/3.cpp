//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main()
//{
//	int answer = 0;
//	string plain = "abcde";
//
//	for (int i = 0; i < plain.length(); i++)
//	{
//		string temp = plain;
//		string rear_string = "";
//		for (int j = i; j >= 0; j--)
//		{
//			rear_string += plain[j];
//		}
//		temp += rear_string;
//
//
//		bool is_answer = true;
//		stack<char> c_stack;
//		int center = temp.length() / 2;
//		for (int j = 0; j < center; j++)
//		{
//			c_stack.push(temp[j]);
//		}
//		for (int j = center + 1; j < temp.length(); j++)
//		{
//			char a = c_stack.top();
//			char b = temp[j];
//			if (c_stack.top() != temp[j])
//			{
//				is_answer = false;
//				break;
//			}
//			c_stack.pop();
//		}
//
//		if (is_answer)
//			cout << temp.length();
//
//	}
//}