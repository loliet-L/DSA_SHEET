/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.

Example 1:


Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
*/

#include<bits/stdc++.h>
using namespace std;


//  * Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

int Size(ListNode* head){
        int c=0;
        while(head!=NULL){
            head=head->next;
            c++;
        }
        return c;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Size of Linked List
        int s=Size(head);
        
        //nth Node from end i.e. (s-n+1)th Node from beginning
        //if n==s return the 2nd Node from beginning
        
        if(n==s) return head->next;
        
        //else get the (s-n)th Node from beginning
        
        int c=1;
        ListNode* temp=head;
        while(c<s-n){
            c++;
            temp=temp->next;
        }
        //link the (s-n)th Node with (s-n+2)th Node
        temp->next=temp->next->next;
		
        return head;
    }