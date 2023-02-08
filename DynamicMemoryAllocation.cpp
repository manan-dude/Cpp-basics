#include <iostream>

using namespace std;

void increment(int &n)
{
    n++;
}

int add(int *arr, int n)//here we are passing an pointer so int *arr
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

int main()
{
   int n;
   cin>>n;
   int * arr = new int[n]; //we have allocated the base address of array to the pointer arr from heap's array
   // of size n
   
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   cout<<"Sum of the array is:"<<add(arr,n);

    return 0;
}
