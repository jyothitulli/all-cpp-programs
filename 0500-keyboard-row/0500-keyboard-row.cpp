class Solution {
public:
    bool isInOneRow(const std::string& word, const std::string& row) {
        for (char c : word) {
            if (row.find(std::tolower(c)) == std::string::npos) {
                return false; 
            }
        }
        return true; 
    }
    vector<string> findWords(vector<string>& words) {
        string first="qwertyuiop";
        string second="asdfghjkl";
        string third="zxcvbnm";
        vector<string>res;
        for(string i:words)
        {
            if( isInOneRow(i,first)|| isInOneRow(i,second) || isInOneRow(i, third)){
               res.push_back(i);
            }
            
        }
        return res;
    }
};