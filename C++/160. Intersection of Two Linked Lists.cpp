/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/// O(N) memory complexity and O(M+N) time complexity

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        map<ListNode*, int> mp;
        ListNode* intersection=NULL;
        
        while(headA)
        {
            mp[headA]++;
            headA=headA->next;
        }
        
        while(headB)
        {
            if(mp[headB])
            {
                intersection=headB;
                break;
            }
            else headB=headB->next;
        }
        
        return intersection;
    }
};

/// O(1) memory complexity and O(M+N) time complexity

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int m=0, n=0;
        ListNode* intersection=NULL;
        ListNode* tempA=headA;
        ListNode* tempB=headB;
        
        while(tempA or tempB)
        {
            if(tempA)
            {
                m++;
                tempA=tempA->next;
            }
            if(tempB)
            {
                n++;
                tempB=tempB->next;
            }
        }
        
        int diff=abs(m-n);
        
        if(m>n)
        {
            while(diff)
            {
                headA=headA->next;
                diff--;
            }
        }
        else
        {
            while(diff)
            {
                headB=headB->next;
                diff--;
            }
        }
        
        while(headA and headB)
        {
            if(headA==headB)
            {
                intersection=headA;
                break;
            }
            else
            {
                headA=headA->next;
                headB=headB->next;
            }
        }
        
        return intersection;
    }
};

