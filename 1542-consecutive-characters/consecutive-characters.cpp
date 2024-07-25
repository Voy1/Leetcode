class Solution {
public:
    int maxPower(string s) {
    int len = s.length();
    int count = 1;
 
    char res = s[0];
    int temp = 1;
    for (int i=1; i<len; i++)
    {
        if (s[i] == res){
            temp++;
            if (temp > count)
                count = temp;
            continue;
        }
        else{
            temp=1;
            res = s[i];
        }   
    }
    return count;
    }
};