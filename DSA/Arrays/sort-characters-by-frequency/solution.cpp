class Solution{	
	public:
		vector<char> frequencySort(string& s){
			map<char, int> freq;

        for (char ch : s) {
            freq[ch]++;
        }

        vector<char> ans;

        for (auto it : freq) {
            ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end(), [&freq](char a, char b) {

            if (freq[a] != freq[b]) {
                return freq[a] > freq[b];
            }

            return a < b;
        });

        return ans;
        }
};