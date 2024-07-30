class Solution{
public:
    int evenlyDivides(int N){
        //code here
    int count = 0;
    int digit;
    int m = N;

    while (N != 0) {
        digit = N % 10;
        if (digit != 0 && m % digit == 0) {
            count++;
        }
        N = N / 10;
    }
    
    return count;
    }
    
   
};
