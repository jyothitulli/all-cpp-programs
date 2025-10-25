class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> firstIndex;
        int sum=0,
        maxlen=0;
        firstIndex[0] = -1;
        for(int i=0;i<nums.size();i++){
            sum += (nums[i] == 1 ? 1 : -1);
            if (firstIndex.count(sum))
                maxlen = max(maxlen, i - firstIndex[sum]);
            else
                firstIndex[sum] = i;
        }
        return maxlen;
    }
};