class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int left=0;
        int j=n-1;
        vector<int>sol(n);
        for(int i=0;i<n;++i){
            if(i%2==0){
            sol[i]=nums[left++];
            }
            else{
                sol[i]=nums[j--];
            }
        }
        return sol;
    }
};