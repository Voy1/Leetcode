class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> grp;
        for(auto s : strs){
            vector<int> arr(26,0);
            string key;
            for(auto c: s){
                arr[c-'a'] += 1;
            }
            for(int i: arr){
                key += to_string(i)+'#';
            }
            mp[key].push_back(s);
        }
        for(auto it : mp){
            grp.push_back(move(it.second));
        }
        return grp;
    }
};