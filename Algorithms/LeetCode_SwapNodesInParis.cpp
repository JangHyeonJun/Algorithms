//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
// 
//class Solution {
//private:
//    void swap(ListNode* a, ListNode* b)
//    {
//        if (b == nullptr)
//            return;
//
//        a->next = b->next;
//        b->next = a;
//    }
//public:
//    ListNode* swapPairs(ListNode* head) {
//        if (head == nullptr)
//            return nullptr;
//        else if (head->next == nullptr)
//            return head;
//
//        ListNode* newHead = head->next;
//        ListNode* prevLast = nullptr;
//
//        while (head != nullptr)
//        {
//            if (prevLast != nullptr && head->next != nullptr)
//                prevLast->next = head->next;
//
//            swap(head, head->next);
//
//            prevLast = head;
//            head = head->next;
//        }
//
//        return newHead;
//    }
//};