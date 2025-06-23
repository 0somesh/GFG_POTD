class Solution {
  public:
    string addStrings(string num1, string num2) {
        
        string result;
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0;
        
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += num1[i--] - '0';
            if (j >= 0) sum += num2[j--] - '0';
            carry = sum / 10;
            result += (sum % 10) + '0';
        }
        reverse(result.begin(), result.end());
        return result;
    }
    
    string minSum(vector<int> &arr) {
        vector<int>nums(10,0);
        for(int i =0; i< arr.size(); i++){
            nums[arr[i]]++;
        }
        string a="";
        string b ="";
        int pos =0;
        int i=0;
        while(i<10){
            while(nums[i]>0){
                if(pos%2 == 0 && i!= 0) a+= i + '0';
                else if(i!=0) b+= i+'0';
                pos++;
                nums[i]--;
            }
            i++;
        }
        
        return addStrings(a, b);
    }
};
