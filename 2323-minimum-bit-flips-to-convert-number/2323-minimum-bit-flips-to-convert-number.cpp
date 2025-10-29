class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<sizeof(int)*8> binary_representation(start);
        bitset<sizeof(int)*8> binary(goal);
        string s=binary_representation.to_string(),g=binary.to_string();
        int cnt=0;
        for(int i=0;i<=s.size();i++){
            if(s[i]!=g[i]){
                cnt++;
            }
        } 
        return cnt;

    }
};