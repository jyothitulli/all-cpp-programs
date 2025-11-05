class Solution {
public:
    static bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b){
        if(a.first!=b.first){
            return a.first>b.first;
        }
        return a.second>b.second;
    }
    int frequent(vector<int> arr,int x){
      unordered_map<int,int>f;
      for(int i:arr){
        f[i]++;
      }  
      vector<pair<int,int>>vec;
      for(const auto& pair:f){
        vec.push_back({pair.second, pair.first});
      }
      sort(vec.begin(),vec.end(),compare);
      long long s=0;
      for(int i=0;i<std::min((int)vec.size(), x);++i){
        s+=(long long)vec[i].first*vec[i].second;
      }
      return static_cast<int>(s);
    }
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> result(nums.size()-k+1);
        for(int i=0;i<nums.size()-k+1;i++)
        {
            vector<int>temp(nums.begin()+i,nums.begin()+i+k);
            result[i]=frequent(temp,x);
        }
        return result;
    }
};