class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>>sc(n);
        for(int i=0;i<score.size();++i){
            sc[i]={score[i],i};
        }
        sort(sc.begin(),sc.end(),[](const pair<int, int>& a, const pair<int, int>& b){return a.first>b.first;});
        vector<string>ranks(n);
        for(int i=0;i<score.size();++i)
        {
            int or1=sc[i].second;
            string member;
            if(i==0){
                member="Gold Medal";
            }
            else if(i==1){
                member="Silver Medal";
            }
            else if(i==2){
                member="Bronze Medal";
            }
            else{
                member=to_string(i+1);
            }
            ranks[or1]=member;
        }
        return ranks;
    }
};