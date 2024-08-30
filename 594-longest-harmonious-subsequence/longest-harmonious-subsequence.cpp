class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i:nums){
                map[i]++;
        }int m=0;
        for(auto i:map){
            int key=i.first;
            if(map.count(key+1)){
                int sum = i.second + map[key+1];
                m=max(m,sum);
            }
        }return m;
    }
};