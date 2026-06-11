class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        while(n--){
            temp = temp->next;
        }
        if(temp == nullptr){
            ListNode *del = head;
            head = head->next;
            delete del;
            return head;
        }
        ListNode *prev = head;
        ListNode *del = head->next;
        temp = temp->next;
        while(temp){
            temp = temp->next;
            prev = prev->next;
            del = del->next;
        }
        prev->next = del->next;
        delete del;
        return head;
    }
};