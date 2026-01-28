class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;

        for(int x : piles) pq.push(x);

        while(k--) {
            int top = pq.top(); pq.pop();
            top = (top + 1) / 2;  
            pq.push(top);
        }

        int ans = 0;
        while(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};