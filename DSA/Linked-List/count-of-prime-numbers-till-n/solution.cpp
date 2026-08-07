class Solution {
private:    
    bool isPrime(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) cnt++;
        }

        if (cnt == 2) return true;
        return false;
    }

public:
    int primeUptoN(int n) {
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            if (isPrime(i) == true) {
                cnt++;
            }
        }
        return cnt;

    /*int sum = 0;
        for(int i = 1; i<n; i++) {
            if (n % i == 0) {
                sum = sum + i;
            }
        }
        if (sum == n) return true;
        return false;*/
    }
};