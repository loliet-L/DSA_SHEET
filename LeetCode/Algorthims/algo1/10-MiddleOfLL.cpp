/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

Example 1:


Input: head = [1,2,3,4,5]
Output: [3,4,5]
*/
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


ListNode* middleNode(ListNode* head) {
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
            slow = slow->next, fast = fast->next->next;
        return slow;
        
        
    }