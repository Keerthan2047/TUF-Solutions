class Solution{	
	public:
		vector<char> frequencySort(string& s){
			unordered_map<char, int> freq;

        // Count frequency
        for (char ch : s) {
            freq[ch]++;
        }

        // Store unique characters
        vector<char> ans;

        for (auto it : freq) {
            ans.push_back(it.first);
        }

        // Sort
        sort(ans.begin(), ans.end(), [&](char a, char b) {

            if (freq[a] != freq[b]) {
                return freq[a] > freq[b];
            }

            return a < b;
        });

        return ans;
        }
};