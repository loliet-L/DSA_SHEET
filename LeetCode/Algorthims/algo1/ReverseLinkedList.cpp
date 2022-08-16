/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:


Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
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

// <<<-------MY SOLUTION------>>>

    ListNode* reverseList(ListNode* &head) {
        if(head==NULL)return head;
        ListNode *curr=head->next;
        ListNode *prev=head;
        head->next=NULL;
        while(curr!=NULL)
        {
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        
        }
        head=prev;
        return head;
        
        
    }



    //  <<<--------BETTER SOLUTION---------->>>>

     ListNode* reverseList(ListNode* head) {
        ListNode* cur = NULL;
        while (head) {
            ListNode* next = head -> next;
            head -> next = cur;
            cur = head;
            head = next;
        }
        return cur;
    }