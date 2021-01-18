//#include <iostream>
//#include <sstream>
//#include <iomanip>
//#include <string>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//void reciprocal2(int N)
//{
//	string s = "0.";
//	string repeated = "";
//	int dvidend = 1;
//	int start_count;
//	int len = to_string(N).length();
//	if (len > 3)
//		start_count = len;
//	else
//		start_count = len;
//	while(true)
//	{
//		dvidend *= 10;
//		int quotient = dvidend / N;
//		int remainder = dvidend % N;
//
//		if (start_count < 1)
//		{
//			repeated += to_string(quotient);
//			auto index = s.find(repeated);
//			if (index == string::npos)
//			{
//
//				if (repeated.length() > 2 )
//				{
//					auto iter = repeated.begin();
//					bool all_same = true;
//					while (iter != repeated.end())
//					{
//						if (*iter != repeated.front())
//						{
//							all_same = false;
//							break;
//						}
//						iter++;
//					}
//					if (all_same)
//					{
//						if(repeated.front() == s.back())
//							s.erase(s.end() - 1);
//						repeated = repeated.front();
//						break;
//					}
//
//					string temp = repeated;
//					temp.erase(temp.end() - 1);
//					auto temp_iter = s.find(temp);
//					if (temp_iter != string::npos &&
//						temp_iter + temp.length() == s.length() )
//					{
//						repeated.erase(repeated.end() - 1);
//						break;
//					}
//				}
//
//				s += repeated.front();
//				repeated.erase(repeated.begin());
//
//			}
//		}
//		else
//		{
//			s += to_string(quotient);
//			start_count--;
//		}
//
//		dvidend = remainder;
//	}
//	cout << s << ' ' << repeated << endl;
//}
//
//void reciprocal(int N) {
//	stringstream stream;
//	double d = 1 / (double)N;
//	stream << fixed << setprecision(16) << d;
//	string s = stream.str();
//	
//	int start, end;
//	start = end = -1;
//	for (int i = 2; i < s.length(); i++)
//	{
//		auto next = s.find(s[i], i+1);
//		bool is_repeated = true;
//		if (next != string::npos)
//		{
//			int diff = next - i;
//			for (int j = i + 1; j < next; j++)
//			{
//				int new_diff = s.find(s[j], j + 1) - j;
//				if (new_diff != diff)
//				{
//					is_repeated = false;
//					break;
//				}
//			}
//		}
//		else
//			continue;
//		if (is_repeated)
//		{
//			start = i;
//			end = next;
//			break;
//		}
//	}
//
//	for (int i = 0; i < end; i++)
//		cout << s[i];
//	cout << ' ';
//	for (int i = start; i < end; i++)
//		cout << s[i];
//	cout << endl;
//}
//
//int main()
//{
//	for (int i = 2; i <= 100; i++)
//	{
//		stringstream stream;
//		double d = 1 / (double)i;
//		stream << fixed << setprecision(16) << d;
//		string s = stream.str();
//		cout << i << " :  " << s << "    /    ";
//		reciprocal2(i);
//	}
//	return 0;
//}