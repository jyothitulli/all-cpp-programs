class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n=prices.size();
        if(n==0)return 0;
        long long cnt=1;
        long long ans=0;
        for(int i=0;i<n;++i)
        {
            if(i>0 && prices[i-1]-prices[i]==1){
                cnt++;

            }
            else{
                 cnt=1;
               
            }
                ans+=cnt;

        }
        return ans;
    }
};