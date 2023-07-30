//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//private:
//  bool isValid(string s)
//  {
//    if (s.length() == 0 || s[0] == '0')
//      return false;
//
//    for (int i = 1; i < s.length(); i++)
//    {
//      if (s[i] == '0' && s[i - 1] == '0')
//        return false;
//    }
//
//    return true;
//  }
//public:
//  int numDecodings(string s) {
//    if (isValid(s) == false)
//      return 0;
//    else if (s.length() < 2)
//      return 1;
//    
//    vector<int> v(s.size() + 1);
//    v[0] = 1;
//    v[1] = s[1] == '0' ? 0 : 2;
//
//    for (int i = 2; i <= s.size(); i++)
//    {
//      int n = stoi(s.substr(i - 2, 2));
//
//      int case1, case2;
//
//      if (s[i - 1] == '0')
//        case1 = 0;
//      else
//        case1 = v[i - 1];
//
//      if (s[i - 2] == '0')
//        case2 = 0;
//      else if (n <= 26)
//        case2 = v[i - 2];
//      else
//        case2 = 0;
//
//      v[i] = case1 + case2;
//    }
//
//    return v[s.size()];
//  }
//};
//
////int main()
////{
////  Solution s;
////  cout << s.numDecodings("1012");
////}