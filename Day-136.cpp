class Solution {
public:
    long long atMost(string& s, int k) {
        if (k < 0) return 0;
        unordered_map<char, int> m;
        long long left = 0, ans = 0, count = 0;      
        for (int right = 0; right < s.size(); right++) {
            if (m[s[right]] == 0) count++;
            m[s[right]]++;            
            while (count > k) {
                m[s[left]]--;
                if (m[s[left]] == 0) count--;
                left++;
            }
            ans += (right - left + 1);
        }
        return ans;
    }
    int countSubstr(string& s, int k) {
        return atMost(s, k) - atMost(s, k - 1);
    }
};
