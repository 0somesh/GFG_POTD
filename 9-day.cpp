class Solution {
  public:
    bool ValidCorner(vector<vector<int> >& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0;i<n;i++)
        {
           for(int j = i+1;j<n;j++)
           {
               int temp = 0;
               for(int k = 0;k<m;k++)
               {
                   if(mat[i][k]&&mat[j][k]) temp++;
                   if(temp==2) return true;
               }
           }
        }
        return false;
    }
};
