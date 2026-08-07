class Solution {
public:
    bool isArmstrong(int n) {
        if(n==0) return 1;
        int sum = 0;
        int cnt = log10(n) + 1;
        int dupn = n;
        while (n > 0) {
            int lstdigit = n % 10;
            sum = sum + pow(lstdigit, cnt);
            n = n / 10;
        } 
        if(sum == dupn) return true;
        return false;
    }
};