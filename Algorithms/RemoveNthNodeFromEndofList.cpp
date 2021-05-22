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
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int nodeSize = 1;
//        ListNode* endNode = head;
//        while (endNode->next != nullptr)
//        {
//            endNode = endNode->next;
//            nodeSize++;
//        }
//
//        n = (nodeSize + 1) - n;
//
//        if (n == 1)
//            return head->next;
//
//        ListNode* prevNode = head;
//        for (int i = 1; i < n - 1; i++)
//            prevNode = prevNode->next;
//		prevNode->next = prevNode->next->next;
//
//        return head;
//    }
//};