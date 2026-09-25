class Solution{	
private: 
    bool isprime(int i, int n) {
        if (n < 2) return false;
        if (i >= n) return true;
        if (n % i == 0) return false;
        return isprime(i+1, n);
    }

public:
		bool checkPrime(int num){
			//your code goes here
            return isprime(2, num);
		}
};