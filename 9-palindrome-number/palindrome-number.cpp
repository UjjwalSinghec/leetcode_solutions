class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int rem=0;
        long long rev=0;
        bool number=false;
        while(x>0){
            rem=x%10;
            rev=rev*10 +rem;
            x=x/10;
        }
        if (original==int(rev)){
            number=true;
        }
        else{
            number=false;
        }
        return number;

    }
};