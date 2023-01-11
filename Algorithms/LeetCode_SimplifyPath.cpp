//#include <string>
//#include <deque>
//using namespace std;
//
//class Solution {
//public:
//  string simplifyPath(string path) {
//    deque<char> result;
//    result.push_back(path[0]);
//    int dotCount = 0;
//    for (int i = 1; i < path.length(); i++)
//    {
//      if (path[i] == '.')
//      {
//        dotCount++;
//        continue;
//      }
//
//      if (dotCount > 2)
//        for (int i = 0; i < dotCount; i++)
//          result.push_back('.');
//
//      while (path[i] != '.' && dotCount < 3 && result.back() == '.')
//        result.pop_back();
//
//      while (result.size() > 0 && path[i] == '/' && result.back() == '/')
//        result.pop_back();
//
//      dotCount = 0;
//      result.push_back(path[i]);
//    }
//
//    if (dotCount > 2)
//      for (int i = 0; i < dotCount; i++)
//        result.push_back('.');
//
//    if (result.size() > 1 && result.back() == '/')
//      result.pop_back();
//
//    string s;
//    for (auto c : result)
//      s.push_back(c);
//
//    return s;
//  }
//};
//
//int main()
//{
//  Solution s;
//  s.simplifyPath("/home///...//...");
//}