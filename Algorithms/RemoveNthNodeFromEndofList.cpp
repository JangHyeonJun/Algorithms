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
//        if (nodeSize == 1)
//        {
//            delete head;
//            return nullptr;
//        }
//
//        n = (nodeSize + 1) - n;
//
//        if (n == 1)
//        {
//            ListNode* newHead;
//            if (head->next != nullptr)
//                newHead = head->next;
//            delete head;
//            return newHead;
//        }
//
//        ListNode* prevNode = head;
//        for (int i = 1; i < n - 1; i++)
//            prevNode = prevNode->next;
//        ListNode* removeNode = prevNode->next;
//
//        if (removeNode->next != nullptr)
//            prevNode->next = removeNode->next;
//        else
//            prevNode->next = nullptr;
//
//        delete removeNode;
//
//        return head;
//    }
//};