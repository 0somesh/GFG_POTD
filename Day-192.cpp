class Solution {
public:
    int countMinOperations(vector<int> nums) {
        int increments = 0;
        int maxBits = 0;

        for (int x : nums) {
            increments += __builtin_popcount(x);

            if (x > 0) {
                int bits = 32 - __builtin_clz(x);
                maxBits = max(maxBits, bits);
            }
        }

        return increments + (maxBits ? maxBits - 1 : 0);
    }
};
