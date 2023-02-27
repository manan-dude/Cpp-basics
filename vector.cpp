#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v;
    v.push_back(8);
    cout<<"size:"<<v.size()<<"\n";
    
    cout<<"first element:"<<v[0]<<"\n";
    
    v.push_back(9);
    v.push_back(12);
    v.push_back(45);
    
    cout<<"number at index 2:"<<v.at(2)<<"\n";
    
    cout<<"front:"<<v.front()<<"\n";
    cout<<"back:"<<v.back()<<"\n";
    
    cout<<"After popping\n";
    v.pop_back();
    cout<<"back:"<<v.back()<<"\n";
    
    cout<<"Is vector empty? "<<v.empty()<<"\n";
    
    cout<<"After Clearing\n";
    v.clear();
    
    cout<<"Is vector empty? "<<v.empty()<<"\n";
    
    //Creating new vector 
    vector<int> a(5,1); // size 5 and content of 1
    
    cout<<"\n"<<a[4]<<"\n";
    
    
    // copying one vector into another
    vector<int> copy(a);
    
    cout<<copy.back();
    
    
    
    
    

    return 0;
}
