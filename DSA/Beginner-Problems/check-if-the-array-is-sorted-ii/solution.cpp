class Solution{ 
private:
    bool sorted(int i, vector<int>& nums) {
        if (i >= nums.size()) return true;
        if (nums[i] < nums[i-1]) return false;
        return sorted(i + 1, nums);
    }
public:
    bool isSorted(vector<int>& nums){
        return sorted(1, nums);
    }
};