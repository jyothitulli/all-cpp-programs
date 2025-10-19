class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>sol(nums);
        sort(sol.begin(),sol.end());
        int n=nums.size();
        int left=(n-1)/2;
        int j=n-1;
        for(int i=0;i<n;++i){
            if(i%2==0){
            nums[i]=sol[left--];
            }
            else{
                nums[i]=sol[j--];
            }
        }

    }
};