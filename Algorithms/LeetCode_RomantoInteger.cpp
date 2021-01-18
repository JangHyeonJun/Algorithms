//#include <vector>
//#include <string>
//#include <map>
//
//using namespace std;
//
//class Solution {
//public:
//    int romanToInt(string s) {
//        int num = 0;
//        map<char, int> m;
//        m.insert(pair<char, int>('I', 1));
//        m.insert(pair<char, int>('V', 5));
//        m.insert(pair<char, int>('X', 10));
//        m.insert(pair<char, int>('L', 50));
//        m.insert(pair<char, int>('C', 100));
//        m.insert(pair<char, int>('D', 500));
//        m.insert(pair<char, int>('M', 1000));
//
//        auto iter = s.rbegin();
//        num += m[*iter];
//        iter++;
//
//        while (iter != s.rend())
//        {
//            if (m[*iter] < m[*(iter - 1)])
//                num -= m[*iter];
//            else
//                num += m[*iter];
//
//            iter++;
//        }
//
//        return num;
//    }
//};
//
//int main()
//{
//    Solution s;
//    s.romanToInt("MCMXCIV");
//}