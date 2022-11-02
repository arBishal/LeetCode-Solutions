/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/// O(n) memory complexity
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        map<ListNode*, int> mp;
        bool flag=0;
        
        if(!head)
        {
            return false;
        }
        
        while(head)
        {
            if(mp[head])
            {
                flag=1;
                break;
            }
            else
            {
                mp[head]++;
                head=head->next;
            }
        }
        
        return flag;
    }
};


/// O(1) memory complexity

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        bool flag=0;
        
        if(!head)
        {
            return false;
        }
        
        while(head)
        {
            if(head->val==100001)
            {
                flag=1;
                break;
            }
            else
            {
                head->val=100001;
            }
            head=head->next;
        }
        
        return flag;
    }
};