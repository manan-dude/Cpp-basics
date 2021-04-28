#include <iostream>

using namespace std;
struct book
{
    private:/**here you can give access to the user of structure's variables by using private and public  **/
        int bookid;
        char title[20];
        float price;
 public:
    void  input()
{

      cout <<"Enter the bookid , title of book and its price :";
    cin>>bookid>>title>>price;
    if(bookid<0)/** If a programmer make a structure function and other work on main function
        the programmer who is using main function if  he input the negative value of
        bookid (generally bookid is positive) then it can be made positive by structure making programmer **/
    {
        bookid= -bookid;
    }
}
void display()
{
    cout<<"\n bookid is:"<<bookid<<""<<"\ntitle is :"<<title<<""<<"\nprice is:"<<price;
}


};
int main()
{
    /** b1.bookid; this show error because -
    int book::bookid' is private within this context

*/
book b1;
    b1.input();
    b1.display();
    return 0;
}
