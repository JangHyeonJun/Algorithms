//#include <vector>
//#include <stack>
//#include <unordered_map>
//using namespace std;
//
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> neighbors;
//    Node() {
//        val = 0;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val) {
//        val = _val;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val, vector<Node*> _neighbors) {
//        val = _val;
//        neighbors = _neighbors;
//    }
//};
//
//
//class Solution {
//public:
//    Node* cloneGraph(Node* node) {
//        if (node == nullptr)
//            return node;
//
//        unordered_map<Node*, Node*> um;
//        stack<Node*> st;
//
//        um[node] = new Node(node->val);
//        st.push(node);
//
//        while (!st.empty()) {
//            auto curr = st.top();
//            st.pop();
//
//            auto clone = um[curr];
//
//            vector<Node*> v;
//            for (auto neighbor : curr->neighbors)
//            {
//                if (um.find(neighbor) == um.end())
//                {
//                    um[neighbor] = new Node(neighbor->val);
//                    st.push(neighbor);
//                }
//
//                auto cloneNeighbor = um[neighbor];
//                v.push_back(cloneNeighbor);
//            }
//
//            clone->neighbors = v;
//        }
//
//        return um[node];
//    }
//};