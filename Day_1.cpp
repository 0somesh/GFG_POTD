//#include

// Date - 10 , Month - 3, Year - 2024

class Solution{
public:
	string removeDuplicates(string str) {
	    unordered_set<char> s(str.begin(),str.end());
	    string ans="";
	    
	    for(char i : str){
	        if(s.find(i) != s.end()){
	            ans+=i;
	            s.erase(i);
	        }
	    }
	    
	    return ans;
	}
};

/*  // Main function
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}

*/
