/* Online C++ Compiler and Editor */
#include <iostream>

using namespace std;

//Top Down Approach
int fib(int n , int dp[] )
{
    if(n==0 || n==1)
    {
        
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    
    dp[n]=  fib(n-1,dp)+fib(n-2,dp);
    return dp[n];
}

int main()
{
    int n=8;
    int dp[n+1];
    // for (int i = 0; i <= n; ++i)
    // {
    //     dp[i] = -1;
    // }
    //  for (int i = 0; i <= n; ++i)
    // {
    //   cout<<fib(i,dp)<<" ";
    // }
    
    //Bottom Up Approach
    // dp[0]=0;
    // dp[1]=1;
    
    // for(int i=2;i<=n;i++)
    // {
    //     dp[i]=dp[i-1]+dp[i-2];
    //     cout<<dp[i]<<" ";
    // }
    
     int prev1=0;
     int prev2=1;
     int curr;
     
    
    for(int i=2;i<=n;i++)
    {
        curr = prev1+prev2;
        prev1 = prev2;
        prev2 = curr;
        cout<<curr<<" ";
      
    }

  
   
   return 0;
}
