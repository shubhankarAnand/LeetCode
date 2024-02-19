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
    ListNode* swapPairs(ListNode* head) {
      ListNode* xyz=head;
        while(xyz!=NULL and xyz->next!=NULL)
        {
            swap(xyz->val,xyz->next->val);
            xyz=xyz->next->next;
        }
    return head;
    }
};