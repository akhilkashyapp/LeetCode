class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int n = (int)arr.size();

        int diff = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            int cur = arr[i + 1] - arr[i];
            if (cur < diff) {
                diff = cur;
            }
        }

        vector<vector<int>> ans;

        for (int i = 0; i < n - 1; i++) {
            int cur = arr[i + 1] - arr[i];
            if (cur == diff) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }

        return ans;
    }
};