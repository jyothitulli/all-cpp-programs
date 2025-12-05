class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int cnt=0,l=0;
        for(int i=0;i<nums.size()-1;++i){
            l+=nums[i];
            long long t=sum-l;
            if(abs(t-l)%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};