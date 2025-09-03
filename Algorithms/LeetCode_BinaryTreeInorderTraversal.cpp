//#include <vector>
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
//    vector<int> inorderTraversal(TreeNode* root) {
//        stack<TreeNode*> s;
//        vector<int> v;
//
//        auto top = root;
//        while (top != nullptr || !s.empty())
//        {
//            while (top != nullptr)
//            {
//                s.push(top);
//                top = top->left;
//            }
//
//            top = s.top();
//            s.pop();
//            v.push_back(top->val);
//            top = top->right;
//        }
//
//        return v;
//    }
//};