class KthLargest {
public:
    priority_queue<int , vector<int>, greater<int>> pq;
    int gk;
    KthLargest(int k, vector<int>& nums) {
        gk = k;
        for(auto i: nums){
            if(pq.size() < k){
                pq.push(i);
            }
            else if(pq.size() == k && i > pq.top()){
                pq.push(i);
            }
            if(pq.size() > k){
                pq.pop();
            }
        }
    }
    
    int add(int val) {
        if(pq.size() < gk){
                pq.push(val);
            }
            else if(pq.size() == gk && val > pq.top()){
                pq.push(val);
            }
            if(pq.size() > gk){
                pq.pop();
            }
            return pq.top();
    }
};