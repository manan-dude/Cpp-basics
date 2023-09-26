// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base
{
   public:
//    void show()
//    {
//     cout<<"Printing Base"<<endl;
//    }
virtual void show()
   {
    cout<<"Printing Base"<<endl;
   }

};

class Derived : public Base
{
    public:
    void show()
   {
    cout<<"Printing Derived"<<endl;
   }


};


int main() {
    // Write C++ code here
    Base b1;
    Derived d1;
    b1.show();
    d1.show();//Printing Derived
    //but what if you want to access the derived function from parent
    // now use the following method
    // now for solving this issue we will use virtual keyword in Base Class
    // now use pointer for addressing it
    Base * b;
    b = &d1;
    b->show();// b.show() wont work here because its a pointer

    // for Printing Base show function use
    b->Base::show();
    
    return 0;
}
