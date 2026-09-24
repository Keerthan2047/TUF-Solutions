class Solution{	
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
            int sum = 0;
            for (int x : nums) {
                sum += x;
            }
            return sum;
		}
};