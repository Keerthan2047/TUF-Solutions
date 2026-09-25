class Solution{	
private:
    void reverse(vector<char>& s, int l, int r) {
        if (l >= r) return;
        swap(s[l], s[r]);
        reverse(s, l+1, r-1);
    }

public:		
	vector<char> reverseString(vector<char>& s){
		//your code goes here
        int l = 0;
        int r = s.size() - 1;
        reverse(s, l, r);
        return s;
	}
};