class Solution {
public:
    int findComplement(int num) {
        int x=0,i=0;
        while(num){
            int temp=num & 1;
            if( !temp )
                x += pow(2, i);
            num = num >> 1;
            i++;
        }return x;
    }
};