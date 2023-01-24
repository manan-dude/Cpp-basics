
#include <iostream>
#include <algorithm>

void swap(int &a, int &b)
{
    int t ;
    t = b;
    b =a;
    a =t;
}

int partition (int arr[],int s, int e)
{
    int p = arr[s];
    
    int cnt =0;
    for(int i=s+1;i<=e;i++)
    {
        if(p>=arr[i])
        {
            cnt++;
        }
    }
    
    //place pivot at the right place
    int pivotIndex = s+cnt;
    
    swap(arr[pivotIndex],arr[s]);
    
    // left and right wala part 
    
    int i = s;
    int j =e;
    
    // ab loop kab tak chalega
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<arr[pivotIndex]) 
        {
            i++;
        }
        while(arr[j]>pivotIndex)
        {
            j--;
        }
        
        if (i<pivotIndex && j>pivotIndex)
        {
           swap(arr[i++],arr[j--]);//increase the counter after swaping 
        }
    }
    
    return pivotIndex;
}


void QuickSort(int arr[], int  s, int e)
{
    //base case
    if(s>=e)
    {
        return;
    }
    
    // partition
    
    int p = partition(arr,s,e);
    
    //left part
    
    QuickSort(arr,s,p-1);
    
    // right part
    QuickSort(arr,p+1,e);
    
}

using namespace std;

int main()
{
  int a[]= {2,4,1,90,1,1,5,6,7,9};
  int n = sizeof(a)/sizeof(int);
  
  QuickSort(a,0,n-1);
  
  
  for(int i=0;i<n;i++)
  {
      cout<<a[i];
  }
  
  

    return 0;
}
