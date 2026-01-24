class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> sum;
        long long temp =0;
        int n = nums.size();
        for(int i=0; i< nums.size()/2;i++){
            temp = nums[i]+nums[n-1-i];
            sum.push_back(temp);
        }
        sort(sum.begin(),sum.end(), greater<int>());
        return sum[0];
    }
};