class Solution {
public:
    int countOddDigit(int n) {
        int cnt = 0;
        while (n > 0) {
            int lstdigit = n % 10;
            if (lstdigit % 2 == 1) {
                cnt++;
            }
            n = n / 10;
        }
        return cnt;
    }
};