class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());

        if (s.size() < 3) {
            return *max_element(s.begin(), s.end());
        }

        int first = *max_element(s.begin(), s.end());
        s.erase(first);

        int second = *max_element(s.begin(), s.end());
        s.erase(second);

        return *max_element(s.begin(), s.end());
    }
};