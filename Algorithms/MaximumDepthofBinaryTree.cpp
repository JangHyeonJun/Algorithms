//#include <iostream>
//#include <queue>
//#include <stack>
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
//    int maxDepth(TreeNode* root)
//    {
//        if (root == nullptr)
//            return 0;
//
//        return dfs(root);
//    }
//
//    int bfs(TreeNode* root)
//    {
//        int depth = 0;
//        queue<TreeNode*> q;
//        q.push(root);
//
//        while (!q.empty())
//        {
//            depth++;
//            queue<TreeNode*> temp;
//
//            while (!q.empty())
//            {
//                auto rootNode = q.front();
//                if (rootNode->left != nullptr)
//                    temp.push(rootNode->left);
//
//                if (rootNode->right != nullptr)
//                    temp.push(rootNode->right);
//                q.pop();
//            }
//
//            q = temp;
//        }
//
//        return depth;
//    };
//
//    int dfs(TreeNode* root)
//    {
//        int maxDepth = 0;
//        stack<pair<TreeNode*, int>> s;
//        s.push(make_pair(root, 1));
//
//        while (!s.empty())
//        {
//            auto node = s.top().first;
//            auto depth = s.top().second;
//            s.pop();
//
//            if (depth > maxDepth)
//                maxDepth = depth;
//
//            if (node->right != nullptr)
//                s.push(make_pair(node->right, depth + 1));
//            if (node->left != nullptr)
//				s.push(make_pair(node->left, depth + 1));
//        }
//
//        return maxDepth;
//    }
//};
//
//int main()
//{
//    TreeNode nodes[7];
//    nodes[0].val = 3;
//    nodes[0].left = &nodes[1];
//    nodes[0].right = &nodes[2];
//
//
//    nodes[1].val = 9;
//
//
//    nodes[2].val = 20;
//    nodes[2].left = &nodes[5];
//    nodes[2].right = &nodes[6];
//
//
//    nodes[5].val = 15;
//
//    nodes[6].val = 7;
//
//    Solution s;
//    cout << "depth: " << s.maxDepth(&nodes[0]) << endl;
//}
//
//
//
//
