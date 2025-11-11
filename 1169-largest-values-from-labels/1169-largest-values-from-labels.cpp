class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size();
        vector<pair<int,int>>hash;
        for(int i=0;i<labels.size();++i)
        {
            hash.push_back({values[i],labels[i]});
        }
        sort(hash.begin(),hash.end(),[] (const pair<int, int>& a, const pair<int, int>& b){
            return a.first>b.first;
        });
        int tot = 0;
        int items= 0;
        map<int,int>output;
        for(int i=0;i<labels.size() && items<numWanted; i++)
        {
            int v = hash[i].first;
            int l = hash[i].second;
            if(output[l]<useLimit){
                output[l]++;
                tot+=v;
                items++;
            }

        }
        return tot;
    }
};