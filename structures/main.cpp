#include <iostream>
#include <string.h>

using namespace std;
struct book/**Universal declaration of struct data type if its not included in main type**/
{
    int bookid;
    char title[20];
    float price;
};

int main()
{

    book b1 = {1002,"c++ by me",400.50};/*** Save the components as an array this will assign the value respectively***/
    book b2,b3;
    /** Alternative method to assign value*/
    b2.bookid = 100;
    b2.price = 323.54;
    strcpy(b2.title,"c by you");
    /** b2.title = "c by you";*We cant use this because of incompatible types in assignment of 'const char[9]'to 'char[20]'*/
   /**you can also save b3 to b2 by equalizing them*/
   b3=b2;
    return 0;
}
