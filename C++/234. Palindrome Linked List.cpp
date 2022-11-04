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

/// O(N) time and space complexity

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> list;
        
        while(head)
        {
            list.push_back(head->val);
            head=head->next;
        }
        
        vector<int> revlist=list;
        reverse(revlist.begin(), revlist.end());
        
        if(revlist==list) return true;
        else return false;
    }
};

/// O(1) space complexity and O(N) time complexity

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
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL or head->next==NULL)
            return true;
        
        ///finding the mid node
        
        ListNode* sngl=head;
        ListNode* dbl=head;
        
        while(sngl and dbl)
        {
            sngl=sngl->next;
            dbl=dbl->next;
            if(dbl) dbl=dbl->next;
        }
        //here sngle is the mid node
        
        ///reversing half the list
        
        ListNode* prev=NULL;
        ListNode* curr=sngl;
        ListNode* temp;
        
        while(curr)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        //prev is the head of reversed list
        
        ///compare the values
        
        while(head and prev)
        {
            if(head->val != prev->val) return false;
            
            head=head->next;
            prev=prev->next;
        }
        
        return true;
        
    }
};