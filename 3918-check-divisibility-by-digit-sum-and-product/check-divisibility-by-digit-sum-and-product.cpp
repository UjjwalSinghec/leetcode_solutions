class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int sum=0,product=1,remainder;
        while(n>0){
            remainder=n%10;
            sum=sum+remainder;
            product= product*remainder;
            n=n/10;
        }
        if(original%(sum+product)==0){
            return true;
        }
        else{
            return false;
        }
    }
};