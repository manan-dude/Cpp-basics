
#include <iostream>

using namespace std;
# define MAX 1000
int memo[MAX];
int arr[MAX][MAX];

//2D memoization
int LCS(string x,string y, int m , int n)
{
    if(m==0||n==0)
    {
        return 0;
    }
    
    // agar count kar liya hai ki kitna lcs hai  toh return kar do
    if(arr[m-1][n-1]!=0)
    {
        return arr[m-1][n-1];
    }
    
    // agar equal hai toh uski value  save karo taaki aagein use aayein
    if(x[m-1]==y[n-1])
    {
        arr[m-1][n-1]=1+LCS(x,y,m-1,n-1);
        return arr[m-1][n-1];
    }
    
    else
    {
        //store the values so they can be use  for other function calls
        arr[m-1][n-1] = max(LCS(x,y,m-1,n),LCS(x,y,m,n-1));
        return arr[m-1][n-1];
    }
    
}

//1D memoization
int  fibbonacci(int n)
{
    if(memo[n]!=0)
    {
        return memo[n];
    }
   
    if(n<0)
    {
        return -1;
    }
    else if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else{
        memo[n]= fibbonacci(n-1)+fibbonacci(n-2);
        return memo[n];
    }
    
}
int main()
{
    
    
   cout<<fibbonacci(6)<<"\n";
   string x = "AGGTAB";
   string y = "GXTXAYB";
   int m = x.size();
   int n = y.size();
   cout<<LCS(x,y,m,n);

    return 0;
}
