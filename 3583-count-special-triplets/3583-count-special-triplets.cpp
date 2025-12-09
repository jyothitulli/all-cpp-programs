class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        
const int MOD = 1e9 + 7;
        unordered_map<long long, long long> freqPrev, freqNext;
    int  n=nums.size();
    for (int x : nums) freqNext[x]++;
    
    long long result = 0;
    
    for (int j = 0; j < n; j++) {
        freqNext[nums[j]]--;
        
        long long countPrev = freqPrev[nums[j] * 2];
        long long countNext = freqNext[nums[j] * 2];
        
        result = (result + countPrev * countNext) % MOD;
        
        freqPrev[nums[j]]++;
    }
    return result;
    }
};