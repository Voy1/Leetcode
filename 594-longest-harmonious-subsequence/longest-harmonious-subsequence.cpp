class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> ans;
        for(auto i:nums){
            if(ans.find(i)!=ans.end()){
                ans[i]++;
            }else{
                ans[i]=1;
            }
        }int m=0;
        for(auto i:ans){
            int key=i.first;
            int sum=0;
            if(ans.count(key+1)){
                sum = i.second + ans[key+1];
                m=max(m,sum);
            }
        }return m;
    }
};