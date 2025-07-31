class Solution {
  public:
    int powerfulInteger(vector<vector<int>>& intervals, int k) {
        vector<pair<int,int>>a;
        for(auto it:intervals){
            a.push_back({it[0],1});
            a.push_back({it[1]+1,-1});
        }
        sort(a.begin(),a.end());
        
        int ans=-1;
        int cnt=0;
        int last=-1;
        for(auto it:a){
            if(last!=-1 && cnt>=k){
                ans=max(ans,it.first-1);
            }
            cnt+=it.second;
            last=it.first;
        }
        return ans;
    }
};
