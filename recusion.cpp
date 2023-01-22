/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>

using namespace std;


bool linSea(int arr[], int n , int k)
{
    if(n==0)
    {
        return false;
        
    }
    if(arr[0]==k)
    {
        return true;
    }
    else
    {
    
    bool remaining = linSea(arr+1,n-1,k);
     return remaining;
    }
   
}

int factorial( int n)
{
    if(n==0|| n==1) //Base Case is must to avoid Segmentation fault / StackOverflow
    {
        return 1;
        
    }
    else
    {
        return n*factorial(n-1);// calling itself and when it reaches to 1 , it will give value to the called function present in stack
    }
}

int pow2 (int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return 2*pow2(n-1);
    }
}


void counting(int n)
{
    if(n==1)
    {
        cout<< 1;
    }
    else
    {
        cout<<n<<" ";
        counting(n-1);
    }
}

int  fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    else
    {
        
         return fibbo(n-1)+fibbo(n-2);
    }
}


void sayDigits(int n,string arr[])
{
    //base case
    if(n==0)
    {
        return;
    }
    
    //processing
    int digit = n%10;
    n =n/10;
    
    //output
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
    
}

bool isSorted(int arr[], int size)
{
    //base case
    if(size ==0 || size ==1)
    {
        return true; 
    }
    
    //simpler problem
    if(arr[0]>arr[1])
    {
        return false;
        
    }
    // recursive call by shortening the arrays length .
    else
    {
        bool ans = isSorted(arr+1,size-1);
         return ans;
    }
   
}

int sumARR(int arr[], int size)
{
    //base case
    if(size ==0)
    {
        return 0; 
    }
    
    
    int  sum =arr[0]+sumARR(arr+1,size-1);
   return sum;
}
int main()
{
    cout<<factorial(8)<<"\n";
    
    cout<<pow2(8)<<"\n";
    
    counting(8);
    
    string arr[10] ={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a[5] ={12,2,8,9,5};
    cout<<"\n";
    sayDigits(41265,arr);
    
    cout<<"\n"<<fibbo(7);
    
    cout<<"\n";
    
    if(isSorted(a,5))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    cout<<sumARR(a,5)<<"\n";
    
    if(linSea(a,5,5))
    {
        cout<<"Found"<<"\n";
    }
    else
    {
        cout<<"Not Found"<<"\n";
    }
    
    

    return 0;
}
