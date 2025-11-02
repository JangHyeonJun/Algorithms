//#include <string>
//#include <deque>
//using namespace std;
//
//class Solution {
//public:
//    string simplifyPath(string path) {
//        deque<string> q;
//
//        auto iter = path.begin();
//		while (iter != path.end())
//        {
//            if (*iter != '/')
//            {
//                auto start = iter;
//                while (iter != path.end() && *iter != '/')
//                    iter++;
//
//                auto s = start - path.begin();
//                auto e = iter - path.begin();
//                auto str = path.substr(s, e - s);
//
//                if (str == "..")
//                {
//                    if (!q.empty())
//                        q.pop_back();
//                }
//                else if (str != ".")
//                    q.push_back(str);
//            }
//
//            if (iter != path.end())
//                iter++;
//        }
//
//        if (q.empty())
//            return "/";
//
//        string result;
//        while (!q.empty())
//        {
//            result += "/" + q.front();
//            q.pop_front();
//        }
//
//        return result;
//    }
//};
