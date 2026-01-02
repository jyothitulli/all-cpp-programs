class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size()/2;
        for(int num:nums)
        {
            freq[num]++;
        }
        for(auto [key,value]:freq)
        {if(value==n){return key; }
        }
        return -1;
    }
};