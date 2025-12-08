class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        int i=1,j;
        while(i<=n){
            j=i+1;
            while(j<=n){
                int s=sqrt((i*i)+(j*j));
                if(s*s==((i*i)+(j*j)) && s<=n){
                    cnt+=2;
                }
                j++;
            }
            i++;
        }
        return cnt;
    }
};