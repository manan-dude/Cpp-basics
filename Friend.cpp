// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base
{
    public:
    int public_var = 5;
    protected:
    int protected_var = 6;
    private:
    int private_var = 7;

    friend class friend_class;
    friend void  friend_function(Base & obj);

};

void friend_function(Base & b)
{
     cout<<"Printing by using Friend Function :"<<endl;
        cout<<"Printing Protected:"<<b.protected_var<<endl;
        cout<<"Printing Private:"<<b.private_var<<endl;
        cout<<"Printing Public:"<<b.public_var<<endl;
}

class friend_class
{
    public:
    void show(Base & b)
    {
        cout<<"Printing by using Friend class :"<<endl;
        cout<<"Printing Protected:"<<b.protected_var<<endl;
        cout<<"Printing Private:"<<b.private_var<<endl;
        cout<<"Printing Public:"<<b.public_var<<endl;
    }

};

int main() {
    // Write C++ code here
    Base b1;
    friend_class f1;
    f1.show(b1);
    cout<<"\n";
    friend_function(b1);
    return 0;
}
