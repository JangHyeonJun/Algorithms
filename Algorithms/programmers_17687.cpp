//#include <string>
//#include <vector>
//
//using namespace std;
//
//const char hexa[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
//'A', 'B', 'C', 'D', 'E', 'F' };
//
//string getTubeCase(const string& all_case, int t, int m, int p)
//{
//	string tube_case = "";
//
//	for (int i = 0; i < t; i++)
//		tube_case += all_case[m*i + p-1];
//
//	return tube_case;
//}
//
//string getAllCase(int n, int t, int m)
//{
//	string s = "0";
//	int i = 1;
//	while (s.length() <= t * m)
//	{
//		int temp = i;
//		string num_string = "";
//		while (temp > 0)
//		{
//			if (temp >= n)
//				num_string = hexa[temp%n] + num_string;
//			else
//				num_string = hexa[temp] + num_string;
//			
//			temp /= n;
//		}
//		s += num_string;
//		i++;
//	}
//
//	return s;
//}
//
//string solution(int n, int t, int m, int p)
//{
//	string all_case = getAllCase(n, t, m);
//	return getTubeCase(all_case, t, m, p);
//}
//
//int main()
//{
//	solution(16, 16, 2, 1);
//}