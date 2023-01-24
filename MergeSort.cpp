#include <iostream>

using namespace std;

void print(int arr[] , int n)
{
    cout<<"Updated array is :";
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void bubblein(int arr[], int n)
{
    
    
    if(n==0 || n==1)
    {
        return;
    }
    if(arr[0]>arr[1])
    {
        swap(arr[0],arr[1]);
        
        
    }
     bubblein(arr+1,n-1);
    
}
void bubble(int arr[] , int n)
{
    print(arr,n);
    if(n==0 || n==1)
    {
        return;
    }
    
    bubblein(arr, n--);
    
   
}

void merge(int *arr, int s , int e)
{
    int mid = s+(e-s)/2;
    
    // now the length of the sub parts of array
    int l1 = mid-s+1;
    int l2 = e-mid;
    
    // now the content of the subparts of the array
    
    int *first = new int[l1];
    int *second = new int[l2];
    
    //copying the values into it
    
    int k = s; 
    for(int i=0;i<l1;i++)
    {
        first[i]=arr[k++];
    }
    
    k = mid+1;
    for(int i=0;i<l2;i++){
        second[i]=arr[k++];
        
    }
    
    // merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    k=s;
    
    while(index1<l1 && index2<l2)
    {
        if(first[index1]<second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
             arr[k++] = second[index2++];
        }
    }
    
    // what if the length of one of the subpart is large
    while(index1<l1)
    {
        arr[k++]=first[index1++];
    }
     while(index2<l2)
    {
        arr[k++]=second[index2++];
    }
    
    
    
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    if(s>=e)
    {
        return;
    }
    int mid = s+(e-s)/2;
    
    //left part mergeSort
    mergeSort(arr,s,mid);
    
    // right part mergeSort
    mergeSort(arr, mid+1,e);
    
    merge(arr,s,e);
}




int main()
{
    int arr[] = {2, 8, 1, 3, 6, 7, 5, 4};
    int n=8;
    
    int s =0;
    int e= n-1;
    mergeSort(arr,s,e);
    
    print(arr,n);
    
   
    return 0;
}
