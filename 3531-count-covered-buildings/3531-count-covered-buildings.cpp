class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        vector<int>rmin(n+1,INT_MAX);
        vector<int>rmax(n+1,INT_MIN);
        vector<int>cmin(n+1,INT_MAX);
        vector<int>cmax(n+1,INT_MIN);
        for(auto &i:buildings){
            int x=i[0];
            int y=i[1];
             rmax[x]=max(rmax[x],y);
             rmin[x]=min(rmin[x],y);
             cmax[y]=max(cmax[y],x);
             cmin[y]=min(cmin[y],x);
        }
         int ans = 0;
        for (auto &b : buildings) {
            int x = b[0];
            int y = b[1];

            bool left  = (rmin[x] < y);
            bool right = (rmax[x] > y);
            bool above = (cmin[y] < x);
            bool below = (cmax[y] > x);

            if (left && right && above && below)
                ans++;
        }
        return ans;

    }
};