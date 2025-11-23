class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        std::vector<int> dp(3, 0); 
        // Initialize dp[1] and dp[2] to a very small negative number to represent unreachable states
        // until a sum with that remainder is found.
        dp[1] = -1e9; // A sufficiently small number
        dp[2] = -1e9; // A sufficiently small number

        for (int num : nums) {
            // Create a temporary copy to avoid modifying dp while iterating over its values
            std::vector<int> temp_dp = dp; 
            for (int sum : temp_dp) {
                if (sum == -1e9) continue; // Skip if this state was unreachable
                int new_sum = sum + num;
                int remainder = new_sum % 3;
                dp[remainder] = std::max(dp[remainder], new_sum);
            }
        }
        return dp[0];
    }
};