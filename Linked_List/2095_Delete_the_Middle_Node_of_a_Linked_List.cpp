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
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            head = nullptr;
            return head;
        }
        ListNode *fast = head, *slow = head, *prev = head;
        fast = fast->next->next;
        slow = slow->next;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
            prev = prev->next;
        }
        prev->next = slow->next;
        slow->next = nullptr;
        delete slow;
        return head;
    }
};