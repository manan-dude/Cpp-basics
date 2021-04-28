#include <iostream>
/**IF YOU WANT TO ADD TWO COMPLEX NUMBERS*/
using namespace std;
/**All the members of class is private by default**/
class Complex
{
    /**private : (No need here)*/
    int a,b;

public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a="<<a<<" b="<<b;
    }
    Complex/*because we returning a complex no.*/ add(Complex c)
    {
        Complex temp;

       temp.a = a+c.a;
       /** a + c.a = here if we write c1 it gives us error
        becuse c1 is declared in main function not here
        but member function can directly access caller object  *//**+c.a/*the a which is called by c is of c2*/;
       temp.b = b+c.b;
       return(temp);
    }
};

int main()
{
Complex c1 , c2 , c3;/**first define other complex number and c3 for the sum of it*/
c1.set_data(3,5);
c2.set_data(7,4);
/** c3 = c1+c2 ; this is wrong because
our compiler do not know how to add two complex
number it know to add only primitive data types*/

/**so we make a funtion that add two complex numbers**/
c3 = c1.add(c2); /** c1 called add function , c2 added as an argument in add function
snd the return value will be c3*/
/** for output  of addition**/
c3.show_data();


}




