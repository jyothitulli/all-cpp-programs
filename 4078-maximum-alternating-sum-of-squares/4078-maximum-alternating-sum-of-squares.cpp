class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long>ans;
        int n=nums.size();
        for(int i:nums)
            {
                ans.push_back(i*i);
            }
        sort(ans.begin(),ans.end());
        long long sum=0;
        for (int i = (n % 2 == 0 ? n / 2 : n / 2); i < n; ++i) {
            sum += ans[i];
            }
        for(int i=0;i<n/2;i++){
            sum-=ans[i];
        }
        return sum;
    }
};