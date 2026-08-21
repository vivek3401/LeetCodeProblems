/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode(-1);
        ListNode* tail=dummy;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val<x){
                tail->next=new ListNode(curr->val);
                tail=tail->next;
            }
            curr=curr->next;
        }
        curr=head;
            while(curr!=NULL){
            if(curr->val>=x){
                tail->next=new ListNode(curr->val);
                tail=tail->next;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};