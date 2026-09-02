class Solution{ 
    public:     
        void reverseString(vector<char>& s){
            vector<char> temp(n);
            int n = s.size();
            for(int i = 0; i < n; i++) {
                temp[i] = s[n-i-1];
            }
            for(int i = 0; i < n; i++) {
                s[i] = temp[i];
            }
        }

};