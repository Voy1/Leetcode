class Solution {
public:
    long long dividePlayers(vector<int>& sk) {
        long long n = sk.size();                        
        long long sum = 0;                                 
        unordered_map<long long,long long> skFreq;            
        for(long long i = 0; i < n; ++i) {
            sum += sk[i];                        
            skFreq[sk[i]]++;                   
        }

        long long teams = n / 2;                           
        if(sum % teams != 0)                        
            return -1;                             

        long long target = sum / teams;     
        long long chemistry = 0;                      

        for(auto [sk, freq] : skFreq) {
        
            if(!skFreq.count(target - sk) || freq != skFreq[target - sk])
                return -1;                       

            chemistry += sk * (target - sk) * freq;
        }

        return chemistry / 2;
    }
};