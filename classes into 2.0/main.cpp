#include <iostream>

using namespace std;
/**All the members of class is private by default**/
class Complex
{
    /**private : (No need here)*/
    int a,b;

public:
    void set_data(int ,int );


    void show_data()
    {
        cout<<"a="<<a<<" b="<<b;
    }
};
void Complex :: set_data(int x , int y)/**BY ADDING CLASS NAME ,
YOU ARE DECLARING SET_DATA
AS AN OBJECT OF COMPLEX OR EXAMPLE
DON'T FORGET TO ADD :: SIGN */
{
    a=x;
    b=y;
}

int main()
{
Complex c1;
c1.set_data(3,5);
c1.show_data();
}




