class Solution {
public:
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* SecondHead = slow->next;
        slow->next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = SecondHead;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode* h1 = head;
        ListNode* h2 = prev;
        while(h2 != NULL){
            ListNode* m1 = h1->next;
            ListNode* m2 = h2->next;
            h1->next = h2;
            h2->next = m1;
            h1 = m1;
            h2 = m2;
        }   
    }
};