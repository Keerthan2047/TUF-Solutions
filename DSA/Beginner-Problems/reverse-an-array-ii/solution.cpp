class Solution {
private:
    static void revarr(int l, int r, vector<int>& nums) {
        if (l >= r) return;
        swap(nums[l], nums[r]);
        revarr(l + 1, r - 1, nums);
    }

public:
    vector<int> reverseArray(vector<int>& nums) {
        int r = nums.size() - 1;
        revarr(0, r, nums);
        return nums;
    }
};