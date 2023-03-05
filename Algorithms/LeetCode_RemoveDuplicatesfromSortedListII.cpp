//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
//class Solution {
//
//  bool equal(ListNode* a, ListNode* b)
//  {
//    if (a == b)
//      return true;
//    else if (a == nullptr || b == nullptr)
//      return false;
//    else
//      return a->val == b->val;
//  }
//
//public:
//  ListNode* deleteDuplicates(ListNode* head) {
//    ListNode* prev = head;
//
//    while (prev != nullptr && prev->next != nullptr)
//    {
//      if (equal(prev, prev->next))
//      {
//        while (equal(prev, prev->next))
//          prev = prev->next;
//
//        prev = prev->next;
//      }
//      else
//        break;
//    }
//
//    head = prev;
//
//    while (prev != nullptr && prev->next != nullptr)
//    {
//      ListNode* curr = prev->next;
//      if (equal(curr, curr->next))
//      {
//        while (equal(curr, curr->next))
//          curr = curr->next;
//        prev->next = curr->next;
//      }
//      else
//        prev = prev->next;
//    }
//
//    return head;
//  }
//};