#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    ListNode* next;
}
class LinkedList{
    ListNode* reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
        curr=nextNode;
        }
    }
    return prev;
};

bool isPali(ListNode* head){
    if (head==NULL || head->next==NULL){
        return true;
        ListNode* slow= head;
        ListNode* fast=head;
        while(fast&& fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secHalf=reverse(slow);
        ListNode* firHalf=head;
        while(secHalf){
            if(firHalf->val != secHalf->val)
            return false;
            firHalf=firHalf->next;
            secHalf=secHalf->next;
        }
        return true;
    }
}
