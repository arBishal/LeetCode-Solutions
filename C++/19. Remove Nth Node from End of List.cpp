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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head->next)
        {
            return nullptr;
        }
        
        ListNode* temp=new ListNode();
        temp->next=head;
        
        ListNode* left=temp;
        ListNode* right=temp;
        
        while(n--)
        {
            right=right->next;
        }
        
        while(left->next and right->next)
        {
            left=left->next;
            right=right->next;
        }
        
        ListNode* del=left->next;
        
        if(left->next!=nullptr) left->next=left->next->next;
        else left->next=nullptr;
        
        delete(del);
        
        return temp->next;
    }
};