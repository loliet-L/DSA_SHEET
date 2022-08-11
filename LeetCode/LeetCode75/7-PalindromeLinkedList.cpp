/*
Given the head of a singly linked list, return true if it is a palindrome.

Example 1:


Input: head = [1,2,2,1]
Output: true
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


bool isPalindrome(ListNode* head) {
        if(!head) return false;
        if(!head->next) return true;
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = slow->next;
        
        stack<int> s;
        while(slow){
            s.push(slow->val);
            slow = slow->next;
        }
        
        while(!s.empty()){
            int x = s.top();
            if(head->val != x) return false;
            s.pop();
            head = head->next;
        }
        
        return true;
    }


    // <<<--------another aproach--------->>>

    /*
-> Algorithm :-

Firstly, find the middle of LL using fast and slow pointer approach.
Then reverse the LL after it
Next, compare both the halves
Lastly, Reverse the second half again and rejoin it to the previous half to form the original LL.
*/


      ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* temp = reverse(head-> next);
        ListNode* tail = head->next;
        tail->next = head;
        head -> next = NULL;
        return temp;
    }


    bool isPalindrome(ListNode* head) {
        if(head == NULL){
            return false;
        }
        
        ListNode* temp = head;
        ListNode* slow = temp;
        ListNode* fast = temp->next;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* newhead = slow -> next;
        slow->next = NULL;
        ListNode* revhead = reverse(newhead);
        ListNode* temp1 = revhead;
        bool flag = true;
        while(temp1 != NULL){
            if(temp->val == temp1 -> val){
                temp = temp->next;
                temp1 = temp1->next;
            }
            else{
                flag = false;
                break;
            }
        }
        temp = head;
        newhead = reverse(revhead);
        while(temp->next != NULL){
            temp = temp -> next;
        }
        temp->next = newhead;
        return flag;
    }