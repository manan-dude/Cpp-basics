#include <iostream>
/**Applying object oriented concept of ecapsulation where we add functions in structures of different data types in one entity*/
using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
void  input()
{

      cout <<"Enter the bookid , title of book and its price :";
    cin>>bookid>>title>>price;
}
void display()
{
    cout<<"\n bookid is:"<<bookid<<""<<"\ntitle is :"<<title<<""<<"\nprice is:"<<price;
}


};
int main()
{
    book b1;
    b1.input();/**b1 for recalling input function and all the elements of structure is applicable for b1*/
    b1.display();
    return 0;
}
