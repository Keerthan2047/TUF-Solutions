class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			//your code goes here
            // if string is empty then no longestCommonPrefix
            if (str.empty()) return "";
            //sorting the string array

            sort(str.begin(), str.end());
            string f = str[0];
            string l = str[str.size() - 1];

            int minlen = min(f.size(), l.size());
            string ans = "";
            for (int i = 0; i < minlen; i++) {
                if (f[i] != l[i]) {
                    return ans;
                }
                ans += f[i];
            }
            return ans;
		}
};