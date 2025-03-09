//#include <vector>
//#include <queue>
//
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
//    vector<vector<int>> levelOrder(TreeNode* root) {
//        vector<vector<int>> result;
//        queue<TreeNode*> q;
//        queue<TreeNode*> lq;
//
//        if (root == nullptr)
//            return vector<vector<int>>();
//
//        q.push(root);
//        while (q.empty() == false)
//        {
//            vector<int> level;
//
//            while (q.empty() == false)
//            {
//                root = q.front();
//                q.pop();
//
//                level.push_back(root->val);
//
//                if (root->left != nullptr)
//                    lq.push(root->left);
//                if (root->right != nullptr)
//                    lq.push(root->right);
//            }
//
//            lq.swap(q);
//
//            result.push_back(level);
//        }
//
//        return result;
//    }
//};
//
//int main()
//{
//    Solution s;
//    TreeNode* root = new TreeNode(3);
//    root->left = new TreeNode(9);
//    root->right = new TreeNode(20);
//    root->right->left = new TreeNode(15);
//    root->right->right = new TreeNode(7);
//    s.levelOrder(root);
//
//    return 0;
//}