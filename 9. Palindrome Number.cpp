class Solution {
public:
    bool isPalindrome(int x) {
        long int y = x;
        long int sum = 0; 
        int digit;

        while(x!=0){
            digit = x%10;
            sum = sum*10 + digit;
            x=x/10;
        }

        if(sum==y and y>=0){
            return true;
        }else{
            return false;
        }
        
    }
};
