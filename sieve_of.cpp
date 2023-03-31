#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n = 5000;
   vector<bool> v(n);
   int i = 2;
   int end = sqrt(n);
   while(i<=end)
   {
       for(int j = i*i;j<=n;j++)
       {
           if(v[j]!=true && j%i==0)
           {
               v[j]=true;
           }
       }
       
       i++;
       
      
   }
   
   for(int i=2;i<=n;i++)
   {
       if(v[i]==false)
       {
           
           cout<<i<<" ";
       }
   }

    return 0;
}
