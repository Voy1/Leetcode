class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        while(n>0){
            sum += n%10;
            sum *= -1;
            n = n/10;
        }return sum*(-1);
    }
};