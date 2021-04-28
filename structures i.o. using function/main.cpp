#include <iostream>

using namespace std;
struct book
{
    int bookid;
    char title[20];
    float price;
};
void display(book );
book input();
int main()
{
    book b1;
    b1 = input();
    display(b1);
    return 0;
}
book input()
{
    book b;
      cout <<"Enter the bookid , title of book and its price :";
    cin>>b.bookid>>b.title>>b.price;
    return(b);

}
void display(book b)
{
    cout<<"\n bookid is:"<<b.bookid<<""<<"\ntitle is :"<<b.title<<""<<"\nprice is:"<<b.price;
}
