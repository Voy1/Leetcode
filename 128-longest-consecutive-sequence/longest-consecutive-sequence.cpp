class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        sort(nums.begin(),nums.end());
        int ans=INT_MIN;
        int cnt=0;
        int last=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1==last){
                cnt++;
                last=nums[i];
            }
            else if(nums[i]==last)continue;
            else{
                cnt=1;
                last=nums[i];
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};