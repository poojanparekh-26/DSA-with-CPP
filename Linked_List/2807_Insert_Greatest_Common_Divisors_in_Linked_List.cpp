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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *a = head;
        while(a && a->next){
            int g = gcd(a->val, a->next->val);
            ListNode *b = new ListNode(g);
            b->next = a->next;
            a->next = b;
            a = b->next;
        }
        return head;
    }
};