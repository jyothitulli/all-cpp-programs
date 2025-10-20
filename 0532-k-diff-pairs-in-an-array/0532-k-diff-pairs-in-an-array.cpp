class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i:nums){
            freq[i]++;
        }
        int cnt=0;
        if (k == 0) {
            for (auto& pair : freq) {
                if (pair.second > 1) {
                    cnt++;
                }
            }
        } else {
            for (auto& pair : freq) {
                int key = pair.first;
                if (freq.count(key + k)) {
                    cnt++;
                }
            }
        }
    return cnt;
    }
};