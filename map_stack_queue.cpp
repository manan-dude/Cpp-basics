#include <iostream>
#include<vector>
#include <stack>
#include <queue> 
#include <set>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
  stack<int> s;
  s.push(1);
  s.pop();
  cout<<s.empty()<<"\n";
  cout<<s.size()<<"\n";
  s.push(4);
  s.push(5);
  cout<<s.top()<<"\n";
  
  queue<int> q;
  q.push(6);
  cout<<"front:"<<q.front()<<"\n";
  q.push(8);
  cout<<"back:"<<q.back()<<"\n";
  
  q.pop();
  
  
  set<int> se;
  se.insert(4);
  se.insert(4);
  se.insert(4);
  se.insert(40);
  
  for(auto i:se)
  cout<<i<<"\n";
  
  cout<<se.count(4)<<"\n";
  
  
  map<int,string> m;
  m[1]="manan";
  m[2]="Jain";
  
  for(auto i:m)
  cout<<i.first<<"\n";
  
  for(auto i:m)
  cout<<i.second<<"\n";
  
  // occurences of alphabets
  string str = "I have a ambition to become a pro coder";
  
  unordered_map<char,int> mes;
  
  for(auto i:str)
    if(i!=' ')
      mes[i]++;
  for(auto i:mes)
    cout<<i.first<<":"<<i.second<<"\n";
   
   // occurences of numbers 
    int arr[5]={1,1,2,2,3};
    
    map<int,int> a;
    
    for(auto i:arr)
      a[i]++;
      
     for(auto i:a)
     cout<<i.first<<":"<<i.second<<"\n";

  
  
  
  
    
    

    return 0;
}
