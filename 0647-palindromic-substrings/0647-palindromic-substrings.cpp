class Solution {
public:
    bool ispalin(string s)
    {
            int l=0,r=s.size()-1;
            while(l<=r){
                if(s[l]!=s[r])
                    return false;
                l++;
                r--;
            }
       return true; 
       }
    int countSubstrings(string s) {
        int cnt=0;
       for(int i=0;i<s.size();i++)
       {
        for(int j=i;j<s.size();j++)
        {
            if(ispalin(s.substr(i,j-i+1))){
                cnt++;
            }
        }
       }
       return cnt;
    }
};