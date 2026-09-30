class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> mpp;
        for(auto & task : tasks){
            mpp[task]++;
        }
        priority_queue<int> pq;
        for(auto & i : mpp){
            pq.push(i.second);
        }
        queue<pair<int, int>> q;
        int time = 0;
        while(!pq.empty() || !q.empty()){
            time++;
            if(!pq.empty()){
                int count = pq.top() - 1;
                pq.pop();
                if(count > 0){
                    q.push({count, time + n});
                }
            }
            if(!q.empty() && q.front().second == time){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return time;
    }
};