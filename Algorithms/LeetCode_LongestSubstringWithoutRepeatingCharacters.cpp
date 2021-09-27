//#include <string>
//#include <queue>
//#include <unordered_set>
//
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int maxLen = 0;
//
//        unordered_set<char> us;
//        queue<char> q;
//
//        for (char c : s)
//        {
//			if (q.size() > maxLen)
//				maxLen = q.size();
//
//			while (us.find(c) != us.end())
//			{
//				us.erase(q.front());
//				q.pop();
//			}
//
//            q.push(c);
//            us.insert(c);
//        }
//
//        if (q.size() > maxLen)
//            maxLen = q.size();
//
//        return maxLen;
//    }
//};
//
//int main()
//{
//    string s1 = "aab";
//    string s2 = "bbbb";
//    string s3 = "abcad";
//
//    Solution s;
//    auto result = s.lengthOfLongestSubstring(s2);
//
//    return 0;
//}