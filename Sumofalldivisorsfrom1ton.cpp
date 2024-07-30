//User function Template for C++
class Solution
{
public:
    // long long sum_factors(int x)
    // {
    //     long long sum = 0;
    //     for (long long j = 1; j * j <= x; j++)
    //     {
    //         if (x % j == 0)
    //         {
    //             sum += j;
    //             if ((x / j) != j)
    //             {
    //                 sum += (x / j);
    //             }
    //         }
    //     }
    //     return sum;
    // }
    
    
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long final_sum = 0;
        // for(long long i = 1 ; i<=N ;i++){
        //      final_sum += sum_factors(i);
        // }
        for(int i = 1; i <=N ;i++){
            final_sum += ((N/i)*i);
        }
        
        
        return final_sum;
    }
};
