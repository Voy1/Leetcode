class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        cin.tie(0);
        ios::sync_with_stdio(0);
        for (int i=0;i<nums.size();i++){
            k^=nums[i];
        }
        return __builtin_popcount(k);
    }
};