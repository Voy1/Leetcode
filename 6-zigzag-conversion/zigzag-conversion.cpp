class Solution {
public:
    string convert(string s, int r) {
        if (r == 1) return s;
        vector <char> ans;
        int n = s.size();
        int gap = 2 * (r - 1);
        for (int i = 0; i < r; i++) {
            int j = i;
            int step1 = gap - 2 * i; 
            int step2 = 2 * i;
            int flag = 0;
            while (j < n) {
                if (i == 0 || i == r - 1) {
                    ans.push_back(s[j]);
                    j += gap;
                }
                else {
                    ans.push_back(s[j]);
                    if (flag % 2 == 0)
                        j += step1;
                    else
                        j += step2;
                    flag++;
                }
            }
        }
        return string(ans.begin(), ans.end());
    }
};