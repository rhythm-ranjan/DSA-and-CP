class Solution {
    int f(vector<int> &dp, vector<int> &nums, int i){
        if(i == 0) return nums[0];
        if(i < 0) return 0;
        if(dp[i] != -1) return dp[i];
        int rob = nums[i] + f(dp, nums, i - 2);
        int skip = f(dp, nums, i - 1);
        return dp[i] = max(rob, skip);
    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return f(dp, nums, n - 1);
    }
};