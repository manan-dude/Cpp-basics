
#include <iostream>

using namespace std;
// By default its private 
// but if you use public you can access easily


class A{
    
private:
    int pri;

public:
  int num =5;
  char c; 
  float f=0.01;
  
  void print()
  {
      cout<<f<<"\n";
  }
  
  void set(int n)
  {
      pri = n;
  }
  
  int  get()
  {
     return pri;
  }

  
};

class B{
    //class is empty
};

int main()
{
    A a1;
    B b1;
    a1.f = 0.05;
    a1.num=100;
    cout<<"size of a1 is:"<<sizeof(a1)<<"\n";
    cout<<"size of b1 is:"<<sizeof(b1)<<"\n";
    cout<<a1.num<<"\n";
    a1.print();
    
    // cout<<a1.pri<<"\n" gives us a error so we use concept of getters and setters
    a1.set(56);
    cout<<"the value of pri = "<<a1.get()<<"\n";
    
    
    // now the question arises why the size of a1 is different from total datatype it should be 13 but its giving us 16
    //https://www.includehelp.com/cpp-tutorial/size-of-a-class-in-cpp-padding-alignment-in-class-size-of-derived-class.aspx
    //this link will help you
    
    
    // dynamically  allocation 
    A * a2 = new A;
    cout<<(*a2).num<<"\n";// value at a2 address.
    // another way to this 
    cout<<a2->f<<"\n";
    
    

    return 0;
}
