//#include <stack>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
// 
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//            return head;
//
//        stack<ListNode*> node_stack;
//
//        while (head != nullptr)
//        {
//            node_stack.push(head);
//            head = head->next;
//        }
//
//        head = node_stack.top();
//        auto result = head;
//        node_stack.pop();
//
//        while (node_stack.empty() == false)
//        {
//            head->next = node_stack.top();
//            node_stack.pop();
//            head = head->next;
//        }
//
//        head->next = nullptr;
//
//        return result;
//    }
//};
//
//int main()
//{
//    ListNode a(1), b(2), c(3);
//    a.next = &b;
//    b.next = &c;
//
//    Solution s;
//    s.reverseList(&a);
//}