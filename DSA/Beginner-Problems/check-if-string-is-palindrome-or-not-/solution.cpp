class Solution{	
    private:
        bool ispal(int l, int r, string& s) {
            if (l >= r) {
                return true;
            }
            if (s[l] != s[r]) return false;
            return ispal(l+1, r-1, s);
        }
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int l = 0;
            int r = s.size() - 1;
            return ispal(l, r, s);
            
		}
};