//#include <string>
//
//using namespace std;
//
//class Solution {
//
//	string strAdd(string num1, string num2)
//	{
//		string result;
//
//		int max = num1.length() > num2.length() ? num1.length() : num2.length();
//
//		int adder = 0, n1, n2;
//
//		for (int i = 0; i < max; i++)
//		{
//			n1 = n2 = 0;
//
//			if (num1.length() > i)
//				n1 = num1[num1.length() - 1 - i] - 48;
//			if (num2.length() > i)
//				n2 = num2[num2.length() - 1 - i] - 48;
//
//			result.insert(0, to_string((n1 + n2 + adder) % 10));
//			adder = (n1 + n2 + adder) / 10;
//		}
//
//		result.insert(0, to_string(adder));
//
//
//		while (result.size() > 1 && result[0] == '0')
//			result.erase(result.begin(), result.begin() + 1);
//
//		return result;
//	}
//
//public:
//	string multiply(string num1, string num2) {
//		string result;
//		int digit10, digit1;
//
//		for (int i = num2.length() - 1; i >= 0; i--)
//		{
//			string temp;
//			digit10 = digit1 = 0;
//
//			for (int j = num1.length() - 1; j >= 0; j--)
//			{
//				int n1 = num1[j] - 48;
//				int n2 = num2[i] - 48;
//				int product = n1 * n2;
//				digit1 = (digit10 + product) % 10;
//				digit10 = (digit10 + product) / 10;
//
//				temp.insert(0, to_string(digit1));
//			}
//
//			if (digit10 != 0)
//				temp.insert(0, to_string(digit10));
//
//			for (int k = num2.length() - 1; k > i; k--)
//				temp.push_back('0');
//
//			result = strAdd(result, temp);
//		}
//
//
//		return result;
//	}
//};
//
//int main()
//{
//	Solution s;
//
//	string n1 = "123456789";
//	string n2 = "987654321";
//
//	s.multiply(n1, n2);
//
//	return 0;
//}