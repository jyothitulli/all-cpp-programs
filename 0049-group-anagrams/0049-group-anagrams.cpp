class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<std::string>>maps;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            maps[key].push_back(s);
        }
        vector<vector<string>> group;
        for(const auto& pair:maps){
            group.push_back(pair.second);
        }
        return group;
    }
};