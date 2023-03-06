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
//  bool isLess(ListNode* node, int n)
//  {
//    return node != nullptr && node->val < n;
//  }
//public:
//  ListNode* partition(ListNode* head, int x) {
//
//    ListNode *dummyLessHead, *dummyGreaterHead, *newHead, *curr;
//
//    newHead = dummyGreaterHead = new ListNode();
//    curr = head;
//
//    while (curr != nullptr)
//    {
//      if (curr->val >= x)
//      {
//        ListNode* temp = new ListNode(curr->val);
//        newHead->next = temp;
//        newHead = temp;
//      }
//
//      curr = curr->next;
//    }
//
//    newHead = dummyLessHead = new ListNode();
//    curr = head;
//
//    while (curr != nullptr)
//    {
//      if (curr->val < x)
//      {
//        ListNode* temp = new ListNode(curr->val);
//        newHead->next = temp;
//        newHead = temp;
//      }
//
//      curr = curr->next;
//    }
//
//    newHead->next = dummyGreaterHead->next;
//
//    return dummyLessHead->next;
//  }
//};