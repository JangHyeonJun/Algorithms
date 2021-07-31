//#include <string>
//#include <vector>
//#include <bitset>
//#include <set>
//
//using namespace std;
//
//const int MAX = 10000000;
//bitset<MAX> bs;
//set<int> primeNumbers;
//
//void InitBitsetByPrimeNumber()
//{
//    bs[0] = bs[1] = true;
//    for (int i = 2; i < MAX; i++)
//        if (!bs[i])
//            for (int j = i * 2; j < MAX; j += i)
//                bs[j] = true;
//}
//
//void dfs(vector<bool> visits, string numbers, string currNum = "")
//{
//    if (!currNum.empty())
//    {
//        int number = stoi(currNum);
//        if (!bs[number])
//            primeNumbers.insert(number);
//    }
//
//    for (int i=0; i<visits.size(); i++)
//        if (!visits[i])
//        {
//            visits[i] = true;
//            dfs(visits, numbers, currNum + numbers[i]);
//            visits[i] = false;
//        }
//}
//
//int solution(string numbers) {
//    InitBitsetByPrimeNumber();
//    vector<bool> visits(numbers.size());
//    dfs(visits, numbers);
//    int answer = primeNumbers.size();
//    return answer;
//}
//
//int main()
//{
//    string s = "123";
//    solution(s);
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////////// 이전 풀이
//////#include <string>
//////#include <vector>
//////#include <algorithm>
//////using namespace std;
//////const int max_num = 10000000;
//////bool dp[max_num];
//////
//////
//////int countPrimeNum(string numbers)
//////{
//////	int count = 0;
//////	const int max = atoi(numbers.c_str());
//////	vector<bool> used;
//////
//////	for (int i = 2; i <= max; i++)
//////	{
//////		if (dp[i])
//////		{
//////			bool counting = true;
//////			used.clear();
//////			used.assign(numbers.length(), false);
//////			string s_i = to_string(i);
//////			for (int j = 0; j < s_i.length(); j++)
//////			{
//////				bool findPrime = false;
//////				for (int k = 0; k < used.size(); k++)
//////				{
//////					if (s_i[j] == numbers[k] && !used[k])
//////					{
//////						findPrime = true;
//////						used[k] = true;
//////						break;
//////					}
//////
//////				}
//////				if (!findPrime)
//////				{
//////					counting = false;
//////					break;
//////				}
//////			}
//////
//////			if (counting)
//////				count++;
//////		}
//////	}
//////
//////	return count;
//////}
//////
//////void makePrime(int n)
//////{
//////	dp[0] = false;
//////	dp[1] = false;
//////	for (int i = 2; i <= n; i++)
//////		dp[i] = true;
//////
//////
//////	for (int i = 2; i <= n; i++)
//////	{
//////		if (dp[i])
//////		{
//////			for (int j = i * 2; j <= n; j += i)
//////				dp[j] = false;
//////		}
//////	}
//////}
//////
//////int solution(string numbers) {
//////	sort(numbers.begin(), numbers.end(), greater<int>());
//////	makePrime(atoi(numbers.c_str()));
//////
//////	return countPrimeNum(numbers);
//////}
//////
////////int main()
////////{
////////	string s = "011";
////////	solution(s);
////////
////////	return 0;
////////}