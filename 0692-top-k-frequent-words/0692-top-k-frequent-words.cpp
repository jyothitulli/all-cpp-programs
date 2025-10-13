class Solution {
public:
    static bool compare(const pair<string,int>& a,const pair<string,int>& b){
            if(a.second==b.second) return a.first<b.first;
            return a.second>b.second;
        }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>freq;
        for(string s:words){
            freq[s]++;
        }
       
        std::vector<std::pair<std::string, int>> vec;
        for(const auto& pair:freq){
            vec.push_back(pair);
        }
        sort(vec.begin(),vec.end(),compare);
        // sort(vec.begin(),vec.end(),lex);
        vector<string>ans;
        for (int i = 0; i < k; ++i) { 
            ans.push_back(vec[i].first);
        }      
        return ans;
    }
};