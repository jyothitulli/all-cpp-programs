class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        std::set<int> seen;
        int duplicate = -1;
        long long actual_sum = 0;
        int n = nums.size();

        for (int num : nums) {
            if (seen.count(num)) { 
                duplicate = num;
            }
            seen.insert(num);
            actual_sum += num;
        }

        long long expected_sum = (long long)n * (n + 1) / 2;
        int missing = expected_sum - (actual_sum - duplicate);

        return {duplicate, missing};
    }
};