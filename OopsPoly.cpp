#include <iostream>

using namespace std;

//Polymorphism
//Operator Overloading(Compile-time)
class A{
    
    public:
    int a,b;
    
    void add()
    {
        cout<<(this->a+this->b)<<"\n";
    }
    
    
    void operator() ()
    {
        cout<<"HI";
    }
    
    void operator +(A &a)
    {
        cout<< this->a+ a.b;
    }
};



//Method Overloading

class Animal{
   public:
   void speak()
   {
       cout<<"speaking\n";
   }
};

class Dog: public Animal{
  public:
  void speak()
  {
      cout<<"barking\n";
  }
};

int main()
{
    A a1,a2;
    a1.a = 4;
    a2.b = 6;
    a1.add();
   
    a1();
     cout<<"\n";
    a1+a2;
    cout<<"\n";
    
    Animal m1;
    Dog d1;
    m1.speak();
    d1.speak();
    return 0;
}
