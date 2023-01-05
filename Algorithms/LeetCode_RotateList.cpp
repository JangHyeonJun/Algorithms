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
//  ListNode* rotateRight(ListNode* head, int k) {
//    if (head == nullptr)
//      return head;
//    
//    auto curr = head;
//    int size = 0;
//
//    while (curr != nullptr)
//    {
//      size++;
//      curr = curr->next;
//    }
//
//    k %= size;
//
//    if (k == 0)
//      return head;
//
//    curr = head;
//    for (int i = 1; i < size - k; i++)
//      curr = curr->next;
//
//    auto end = curr;
//    auto start = curr->next;
//
//    for (int i = 0; i < k; i++)
//      curr = curr->next;
//    curr->next = head;
//    end->next = nullptr;
//
//    return start;
//  }
//};