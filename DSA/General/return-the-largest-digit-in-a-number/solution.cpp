class Solution {
public:
    int largestDigit(int n) {
        int large = 0;
        while (n > 0) {
            int lstdigit = n  % 10;
            if (lstdigit > large) {
                large = lstdigit;
            }
            n = n / 10;
        }
        return large;
    }
};