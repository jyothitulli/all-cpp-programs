class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int cnt=0;
        int sum=accumulate(apple.begin(),apple.end(),0);
        for(int i:capacity){
            sum-=i;
                 cnt++;
           
            if(sum<=0){
                break;
            }
        }
        return cnt;
    }
};