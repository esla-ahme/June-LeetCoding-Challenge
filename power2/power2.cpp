class Solution {
public:
    bool isPowerOfTwo(int n) {
        long m = n;
        if (n != 0 && (m&(m-1)) == 0)
            return true;
        return false;
    }
};
