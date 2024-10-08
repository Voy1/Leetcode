class Solution {
public:
    int n=1;
    array<vector<int>, 26> alphabet;
    void shorten(string& s){
        int sz=s.size();
        char cur;
        for(int l=0, r=1; r<sz; r++){
            cur=s[r];
            while(l<r && s[l]==cur) l++;
            if (r<sz && s[l]!=cur){
                alphabet[cur-'a'].push_back(n);
                s[n++]=cur;
                l=r;
            }
        }
        s.resize(n);
  
    }
    int strangePrinter(string& s) {
        shorten(s);
        int dp[101][101]={0};
        for(int i=n-1; i>=0; i--){
            dp[i][i]=1;
            for(int j=i+1; j<n; j++){
                int x=dp[i][j-1];
                if (s[i]==s[j]){
                    dp[i][j]=x;
                    continue;
                }
                x++;
                if (j-i<=5){
                    for(int k=i+1; k<j-1; k++){
                        if (s[k]==s[j]){
                            x=min(x, dp[i][k-1]+dp[k][j-1]);
                            k++;
                        }
                    }
                }
                else{
                    auto& K=alphabet[s[j]-'a'];
                    int l=lower_bound(K.begin(), K.end(), i+1)-K.begin();
                    for (int k=l; k<K.size() && K[k]<j-1; k++) {
                        x=min(x, dp[i][K[k]-1]+dp[K[k]][j-1]);
                    }
                }
                dp[i][j]=x;
            }
        }
        return dp[0][n-1];
    }
};