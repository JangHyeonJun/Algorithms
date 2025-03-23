//#include <unordered_set>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//class Solution {
//    unordered_set<char> opens = {'(', '{', '['};
//    unordered_set<char> closes = {')', '}', ']'};
//public:
//    bool isValid(string s) {
//        stack<char> stack;
//        for (auto c : s)
//            if (opens.contains(c))
//                stack.push(c);
//            else if (closes.contains(c))
//            {
//                if (stack.empty())
//                    return false;
//                else if (c == ')' && stack.top() == '(')
//                    stack.pop();
//                else if (c == '}' && stack.top() == '{')
//                    stack.pop();
//                else if (c == ']' && stack.top() == '[')
//                    stack.pop();
//                else
//                    return false;
//            }
//            else
//                return false;
//        return stack.empty();
//    }
//};