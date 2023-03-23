#include <iostream>

using namespace std;

class A{

public:
 int val;
 char c;
 static int count;
// defualt constructor
  A()
  {
      cout<<"constructor created"<<"\n";
  }
// parameterized constructor
  A(int num)
  {
      
      val = num;
  }
  
  A(int val , char c)
  {
      this->val = val;
      this->c = c;
  }
  
  // copy constructor
  A(A & temp)
  {
      this->val = temp.val;
      this->c = temp.c;
      
  }
  
  static void cnt()
  {
      count++;
      cout<<"The value of objects = "<<count<<"\n";
  }
  
  ~ A()
  {
      cout<<"Destructor is called"<<"\n";
  }
};

int A::count =0; // this is the value belongs to class not the object

int main()
{
    
    A * a1 = new A();
    A::cnt();
    A a2(56);
    A::cnt();
    A a3(45,'A');
    A::cnt();
    cout<<a2.val<<"\n";
    cout<<a3.val<<" "<<a3.c<<"\n";
    
    //Copy constructor
    A a4(a3);// A a4 = a3;
    A::cnt();
    cout<<a4.val<<" "<<a4.c<<"\n";
    
    // here destructor is only called 3 times but we have created 4 objects
    // destructor automatically called only for static objects
    // Manually delete the dynamic allocated object
    // delete a1;

    return 0;
}
