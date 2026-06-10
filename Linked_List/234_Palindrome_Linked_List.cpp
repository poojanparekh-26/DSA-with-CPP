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
        ListNode* temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;
        }
        temp = head;
        int half = n/2;
        while(half--) temp = temp->next;
        ListNode* mid = temp;

        ListNode* prev = nullptr;
        ListNode* curr = mid;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        mid = prev;
        ListNode* temp1 = head;
        ListNode* temp2 = mid;
        while(temp2){
            if(temp1->val != temp2->val) return false;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};