//#include <iostream>
//#include <stack>
//using namespace std;
//
//struct Info {
//  long long min;
//  long long max;
//  TreeNode* node;
//};
//
//class Solution {
//public:
//  bool isValidBST(TreeNode* root) {
//    stack<Info> s;
//    s.push(Info{ LONG_MIN, LONG_MAX, root });
//
//    while (!s.empty())
//    {
//      auto info = s.top();
//      s.pop();
//
//      auto node = info.node;
//      auto left = node->left;
//      auto right = node->right;
//
//      if (left != nullptr)
//      {
//        if (left->val >= node->val || left->val <= info.min)
//        {
//          cout << "node: " << node->val << ", left: " << left->val << ", min: " << info.min << ", max: " << info.max << endl;
//          return false;
//        }
//
//        s.push(Info{ info.min, node->val, left });
//      }
//
//      if (right != nullptr)
//      {
//        if (right->val <= node->val || right->val >= info.max)
//        {
//          cout << "node: " << node->val << ", right: " << right->val << ", min: " << info.min << ", max: " << info.max << endl;
//          return false;
//        }
//
//        s.push(Info{ node->val, info.max, right });
//      }
//    }
//
//    return true;
//  }
//};
