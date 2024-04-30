class Solution {
public:
    int numTilings(int n) {
        if(n <= 2){
            return n;
        }
        if(n == 3){
            return 5;
        }
        int md = (int)1000000007;
        vector<int> dp(n , 0);

        dp[0] = 1;
        dp[1] = 2;
        dp[2] = 5;

        for(int i=3;i<n;i++){
            dp[i] = ((dp[i-1]%md)*2)%md + dp[i-3]%md;
            dp[i] = dp[i] % md;
        }
        return dp[n-1];
    }
};