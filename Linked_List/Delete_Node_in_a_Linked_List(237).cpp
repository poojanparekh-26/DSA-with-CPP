// Problem: Delete Node in a Linked List
// Platform: LeetCode
// Topic: Linked List

class Solution {
public:
    void deleteNode(ListNode* node) {
        struct ListNode* temp=node;
        while(temp->next->next!=NULL)
        {
            swap(temp->val,temp->next->val);
            temp=temp->next;
        }
        swap(temp->val,temp->next->val);
        temp->next=NULL;
    }
};