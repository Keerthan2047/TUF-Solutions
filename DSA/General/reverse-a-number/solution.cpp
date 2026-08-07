class Solution {
public:
    int reverseNumber(int n) {
        int rnum = 0;
        while (n > 0) {
            int lstdigit = n % 10;
            rnum = (rnum * 10) + lstdigit;
            n = n / 10;
        }
        return rnum;
    }
};