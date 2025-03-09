//#include <stack>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//    bool isSymmetric(TreeNode* root) {
//
//        stack<pair<TreeNode*, TreeNode*>> s;
//
//        auto left = root->left;
//        auto right = root->right;
//
//        if (left == nullptr && right == nullptr)
//            return true;
//
//        s.push({ left, right });
//
//        while (s.empty() == false)
//        {
//            left = s.top().first;
//            right = s.top().second;
//            s.pop();
//
//            if (left == nullptr && right == nullptr)
//                continue;
//
//            if (left == nullptr || right == nullptr)
//                return false;
//
//            if (left->val != right->val)
//                return false;
//
//			s.push({ left->right, right->left });
//			s.push({ left->left, right->right });
//        }
//
//        return true;
//    }
//};