class Solution {
public:
    int maxPower(string s) {
    int len = s.length();
    int count = 0;
 
    char res = s[0];
    for (int i=0; i<len; i++)
    {
        int temp = 1;
        for (int j=i+1; j<len; j++)
        {
            if (s[i] != s[j])
                break;
            temp++;
        }
 
        if (temp > count)
        {
            count = temp;
            res = s[i];
        }
    }
    return count;
    }
};