// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Abstract
{
   public:
    virtual void draw()=0;
};

class Rectangle : public Abstract
{
    public:
   
    void draw() 
    {
        cout<<"Rectangle is Drawing\n";
       
    }

};
class Circle : public Abstract
{
    public:
    void draw()
    {
        cout<<"Circle is Drawing\n";
    }

};

class A{
    public:
    class B
    {
              public:
              void message () 
              { 
                cout<<"InnerClass B\n";
              }
        
    };
};

class Constant
{
    public:
    mutable int a ;
    const int b=0;
    static int i;

    void A () const
    {
        cout<<"Message of constant";
        // a = 6; Error , its only for read only
        a=6; // if you use mutable then its changable
    }

    Constant(int n):b(n){}
    
    

};

class D{
    public:
    D()
    {
        cout<<"Object Created\n";
    }

    static void Message()
    {
        cout<<"Without using . calling function"<<endl;
    }
    ~ D()
    {
             cout<<"Object Destructed\n";
    }

};

int Constant :: i =0;

int main() {
    // Write C++ code here
    Circle c1;
    Rectangle r1;
    c1.draw();
    r1.draw();

    A :: B b1;
    b1.message();

    Constant c2(43);
    cout<<c2.b<<endl;
    c2.i = 6;
    cout<<c2.i<<endl;

    const Constant c3(45);
    // c3.a = 5; readOnly
    c3.i = 9;
    cout<<c3.i<<endl;

    // if(1)
    // {
    //     D d1;
    // }

    // Object Created
    // Object Destructed
    // End of Main

     if(1)
    {
       static D d1;
    }
    // Object Created
    // End of Main
    // Object Destructed

    cout<<"End of Main\n";

    D:: Message();



    
    return 0;
}
