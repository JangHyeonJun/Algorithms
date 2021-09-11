//#include <string>
//#include <vector>
//#include <sstream>
//#include <bitset>
//#include <math.h>
//using namespace std;
//
//const int MaxPrimeNumber = 1000000;
//bitset<MaxPrimeNumber + 1> isPrimeNumber;
//
//vector<int> splitNumber(string s)
//{
//    vector<int> numbers;
//    string temp;
//    for (int i = 0; i < s.length(); i++)
//    {
//        if (s[i] != '0')
//        {
//            temp += s[i];
//        }
//        else if (!temp.empty())
//        {
//            int n = stoi(temp);
//            if (n > 0)
//                numbers.push_back(n);
//            temp.clear();
//        }
//    }
//
//    if (!temp.empty())
//    {
//        long long n = stoll(temp);
//        if (n > 0)
//            numbers.push_back(n);
//        temp.clear();
//    }
//
//    return numbers;
//}
//
//string convertKNumber(int n, int k)
//{
//    string s;
//    while (n > 0)
//    {
//        s = to_string(n % k) + s;
//        n /= k;
//    }
//
//    return s;
//}
//
//void makePrimeNumber()
//{
//    isPrimeNumber.set();
//    isPrimeNumber[0] = isPrimeNumber[1] = false;
//    for (int i = 2; i <= sqrt(MaxPrimeNumber); i++)
//    {
//        if (isPrimeNumber[i])
//        {
//            for (int j = 2; i * j <= MaxPrimeNumber; j++)
//            {
//                isPrimeNumber[i * j] = false;
//            }
//        }
//    }
//}
//
//int solution(int n, int k) {
//    // 437674, 3 -> 211020101011
//    int answer = 0;
//
//    makePrimeNumber();
//    string converted = convertKNumber(n, k);
//    vector<int> numbers = splitNumber(converted);
//
//    for (int n : numbers)
//        if (isPrimeNumber[n])
//            answer++;
//    return answer;
//}
//
//int main()
//{
//    //solution(437674, 3);
//    //solution(110011, 10);
//    solution(1000000, 3);
//
//    return 0;
//}