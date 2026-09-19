class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int,ListNode*> , vector<pair<int,ListNode*>> , greater<pair<int,ListNode*>>> pq;
        for(int i = 0; i < lists.size(); i++){
            if(lists[i] != nullptr){pq.push({lists[i]->val,lists[i]});
            }
        }
        ListNode* DNode = new ListNode(-1);
        ListNode* temp = DNode;
        while(!pq.empty()){
            pair<int,ListNode*> p = pq.top();
            temp->next = p.second;
            pq.pop();
            if(p.second->next){
                pq.push({p.second->next->val,p.second->next});
            }
            temp = temp->next;
        }
        return DNode->next;
    }
};