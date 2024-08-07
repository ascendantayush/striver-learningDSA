class Solution {
public:
    int reverse(int x) {
    long int n = x;
    long int sum = 0;
    int digits;
    while (n != 0)
    {
        digits = n % 10;
        sum = sum * 10 + digits;
        n = n / 10;
    }
        if(sum > INT_MAX || sum < INT_MIN){
            return 0;
        } else{
            return sum;
        }
    
    }
};
