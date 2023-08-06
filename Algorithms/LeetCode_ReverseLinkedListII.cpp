//#include <iostream>
//using namespace std;
//
//
////struct ListNode {
////    int val;
////    ListNode *next;
////    ListNode() : val(0), next(nullptr) {}
////    ListNode(int x) : val(x), next(nullptr) {}
////    ListNode(int x, ListNode *next) : val(x), next(next) {}
////};
// 
//class Solution {
//
//  void SwapNode(ListNode* left_L, ListNode* right_L)
//  {
//    if (left_L == right_L)
//      return;
//
//    ListNode* left = left_L->next;
//    ListNode* left_R = left->next;
//
//    ListNode* right = right_L->next;
//    ListNode* right_R = right->next;
//
//    if (left_L->next != right_L)
//    {
//      left_L->next = right;
//      right->next = left_R;
//
//      right_L->next = left;
//      left->next = right_R;
//    }
//    else
//    {
//      left_L->next = right;
//      right->next = left;
//      left->next = right_R;
//    }
//  }
//
//public:
//  ListNode* reverseBetween(ListNode* head, int left, int right) {
//    int i = 1;
//    ListNode* iter = head;
//    int diff = right - left;
//
//    ListNode* prevHead = new ListNode(999, head);
//    ListNode* left_L = left == 1 ? prevHead : nullptr;
//    ListNode* right_L = right == 1 ? prevHead : nullptr;
//    while (iter != nullptr)
//    {
//      if (i == left - 1)
//        left_L = iter;
//      if (i == right - 1)
//        right_L = iter;
//
//      iter = iter->next;
//      i++;
//    }
//
//    for (i = 0; i <= (diff - 1) / 2; i++)
//    {
//      cout << "leftL: " << left_L->val << ", rightL: " << right_L->val << endl;
//      SwapNode(left_L, right_L);
//      cout << "(2)leftL: " << left_L->val << ", rightL: " << right_L->val << endl;
//
//      ListNode* iter2 = prevHead->next;
//      while (iter2 != nullptr)
//      {
//        cout << iter2->val << ' ';
//        iter2 = iter2->next;
//      }
//      cout << endl;
//
//      left_L = left_L->next;
//      iter = left_L;
//      
//      for (int j = 0; j < diff - 2 - (i * 2); j++)
//      {
//        cout << "diff: " << diff <<", i: " << i << ", j:" << j << endl;
//        cout << "iter: " << iter->val << endl;
//        iter = iter->next;
//      }
//      right_L = iter;
//    }
//
//    return prevHead->next;
//  }
//};