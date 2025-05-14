class Solution {
  public:
    string countAndSay(int n) {
        string prev="1";
        for(int i=2;i<=n;i++){
            int count=1;
            string curr="";
            for(int j=1;j<prev.size();j++){
                if(prev[j]==prev[j-1])
                count++;
                 else{
                    curr += to_string(count) + prev[j - 1];
                count=1;
                }
                
            }
            curr+=to_string(count)+prev.back();
                prev=curr;
            }
        return prev;
    }
};

