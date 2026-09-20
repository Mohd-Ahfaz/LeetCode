class Solution {
public:
    ListNode* reverse(ListNode* temp) {
        ListNode* prev = NULL;
        ListNode* curr = temp;
        ListNode* next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        
        return prev;
    }
    ListNode* kthNode(ListNode* temp, int k){
        k -= 1;
        while(temp != NULL && k > 0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* kth = kthNode(temp, k);
            if(kth == NULL){
                if(prev != NULL) prev->next = temp;
                break;
            } 
            ListNode* next = kth->next;
            kth->next = NULL;
            reverse(temp);
            if(temp == head) head = kth;
            else prev->next = kth;
            prev = temp;
            temp = next;
        }
        return head;
    }
};