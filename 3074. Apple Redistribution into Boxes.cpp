class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        for(int x: apple){
            sum+=x;
        }
        sort(capacity.begin(), capacity.end(), greater<int>());
        int count = 0;
        for (int i=0; i < capacity.size(); i++){
            if(sum>0){
                sum-=capacity[i];
                count++;
            }

        }
        return count;
         

    }
};