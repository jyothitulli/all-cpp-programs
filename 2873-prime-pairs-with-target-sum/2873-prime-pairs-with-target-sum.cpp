class Solution {
public:
    int prime(int a){
        if (a <= 1) { 
        return false;
        }
        if(a==2 || a==3){
            return true;
        }
        if(a%2==0){
            return false;
        }
        for(int i=3;i*i<=(a);i+=2){
            if(a%i==0){
                return false;
            }
        }
        return true;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>>result;
        for(int i=2;i<=n/2;i++){
            vector<int>res;
            if(prime(i) && prime(n-i)){
                res.push_back(i);
                res.push_back(n-i);
            result.push_back(res);

            }
        }
   
        return result;
    }
};