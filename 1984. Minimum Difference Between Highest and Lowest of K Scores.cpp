class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int n = nums.size();

        for (int i = 0; i + k - 1 < n; i++) {
            int diff = nums[i + k - 1] - nums[i];
            if (diff < ans) {
                ans = diff;
            }
        }
        return ans;
    }
};