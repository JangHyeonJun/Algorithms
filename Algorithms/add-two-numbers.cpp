////#include <iostream>
////
////using namespace std;
////
////
//// struct ListNode {
////      int val;
////      ListNode *next;
////      ListNode() : val(0), next(nullptr) {}
////      ListNode(int x) : val(x), next(nullptr) {}
////      ListNode(int x, ListNode *next) : val(x), next(next) {}
//// };
//// 
////class Solution {
////public:
////    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
////        bool carry = false;
////        ListNode* node = new ListNode;
////        ListNode* curr = node;
////        while (l1 != nullptr || l2 != nullptr)
////        {
////            int sum = 0;
////            int n1 = 0;
////            int n2 = 0;
////            if (l1 != nullptr)
////            {
////                n1 = l1->val;
////                l1 = l1->next;
////            }
////            if (l2 != nullptr)
////            {
////                n2 = l2->val;
////                l2 = l2->next;
////            }
////
////            if (carry)
////            {
////                ++sum;
////                carry = false;
////            }
////
////            sum += n1 + n2;
////
////            if (sum > 9)
////            {
////                carry = true;
////                sum %= 10;
////            }
////
////            curr->val = sum;
////
////            if (l1 != nullptr || l2 != nullptr)
////            {
////                curr->next = new ListNode;
////                curr = curr->next;
////            }
////            else if (carry)
////            {
////                curr->next = new ListNode(1);
////            }
////        }
////
////        return node;
////    }/**
//// * Definition for singly-linked list.
//// * struct ListNode {
//// *     int val;
//// *     ListNode *next;
//// *     ListNode() : val(0), next(nullptr) {}
//// *     ListNode(int x) : val(x), next(nullptr) {}
//// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//// * };
//// */
////    class Solution {
////    public:
////        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
////            bool carry = false;
////            ListNode* node = new ListNode;
////            ListNode* curr = node;
////            while (l1 != nullptr || l2 != nullptr)
////            {
////                int sum = 0;
////                int n1 = 0;
////                int n2 = 0;
////                if (l1 != nullptr)
////                {
////                    n1 = l1->val;
////                    l1 = l1->next;
////                }
////                if (l2 != nullptr)
////                {
////                    n2 = l2->val;
////                    l2 = l2->next;
////                }
////
////                if (carry)
////                {
////                    ++sum;
////                    carry = false;
////                }
////
////                sum += n1 + n2;
////
////                if (sum > 9)
////                {
////                    carry = true;
////                    sum %= 10;
////                }
////
////                curr->val = sum;
////
////                std::cout << "sum : " << sum << std::endl;
////
////                if (l1 != nullptr || l2 != nullptr)
////                {
////                    curr->next = new ListNode;
////                    curr = curr->next;
////                }
////                else if (carry)
////                {
////                    curr->next = new ListNode(1);
////                }
////            }
////
////            return node;
////        }
////    };
////};
////
////int main()
////{
////    ListNode node = ListNode(9);
////    ListNode *curr = &node;
////    for (int i = 0; i < 10; i++)
////    {
////        curr->next = new ListNode(i);
////        curr = curr->next;
////    }
////
////    while (node.next != nullptr)
////    {
////        cout << node.val << endl;
////        node = *node.next;
////    }
////}
////
////
/////*
//// * Definition for singly-linked list.
//// * struct ListNode {
//// *     int val;
//// *     ListNode *next;
//// *     ListNode() : val(0), next(nullptr) {}
//// *     ListNode(int x) : val(x), next(nullptr) {}
//// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//// * };
////class Solution {
////public:
////    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
////        bool carry = false;
////        ListNode* node = new ListNode;
////        ListNode* curr = node;
////        while (l1 != nullptr || l2 != nullptr)
////        {
////            int sum = 0;
////            int n1 = 0;
////            int n2 = 0;
////            if (l1 != nullptr)
////            {
////                n1 = l1->val;
////                l1 = l1->next;
////            }
////            if (l2 != nullptr)
////            {
////                n2 = l2->val;
////                l2 = l2->next;
////            }
////
////            if (carry)
////            {
////                ++sum;
////                carry = false;
////            }
////
////            sum += n1 + n2;
////
////            if (sum > 9)
////            {
////                carry = true;
////                sum %= 10;
////            }
////
////            curr->val = sum;
////
////            std::cout << "sum : " << sum << std::endl;
////
////            if (l1 != nullptr || l2 != nullptr)
////            {
////                curr->next = new ListNode;
////                curr = curr->next;
////            }
////            else if (carry)
////            {
////                curr->next = new ListNode(1);
////            }
////        }
////
////        return node;
////    }
////};
////*/