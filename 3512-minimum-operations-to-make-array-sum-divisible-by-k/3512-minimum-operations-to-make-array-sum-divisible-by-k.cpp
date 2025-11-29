class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        int min_operations=0;
        while(sum%k!=0){
            sum--;
            min_operations++;
        }
        return min_operations;
    }
};