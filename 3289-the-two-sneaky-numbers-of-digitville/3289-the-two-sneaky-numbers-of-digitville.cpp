class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>hash;
        for(int i:nums){
            hash[i]++;
        }
        vector<int>ans;
        for(const auto& pair:hash){
            if(pair.second >1){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};