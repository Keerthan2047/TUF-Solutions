class Solution {
   public:
    bool isPalindrome(int n) {
        int copy = n;
        int rnum = 0;
        while (n > 0) {
            int lstdigit = n % 10;
            rnum = (rnum * 10) + lstdigit;
            n = n / 10;
        }
        if (copy == rnum) return true;
        return false;
    }
};