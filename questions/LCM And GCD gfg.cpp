class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd ;
        long long product = A * B ;
        while(A>0 && B>0){
            if(A>B){
                A = A% B ;
            } else{
                B = B % A ;
            }
        }
        
        if(A==0){
            gcd = B ;
        }else{
            gcd =  A;
        }
        
        long long lcm = product/gcd;
        
        
        return {lcm , gcd};
        
    }
};
