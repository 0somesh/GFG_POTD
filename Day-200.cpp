class Solution {
public:
    int minProd(vector<int>& arr) {
        int n=arr.size(),mxNeg=INT_MIN,mnPos=INT_MAX,prod=1;
        bool neg=false;
        for(int i=0;i<n;i++){
            if(arr[i]!=0)
                prod*=arr[i];
            if(arr[i]<0){
                neg=true;
                mxNeg=max(mxNeg,arr[i]);
            }
            if(arr[i]>=0){
                mnPos=min(mnPos,arr[i]);
            }
        }
        return prod<0?prod:(neg?(prod/mxNeg):mnPos);
    }
};

