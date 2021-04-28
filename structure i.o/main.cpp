#include <iostream>

using namespace std;
struct book/**Universal declaration of struct data type if its not included in main type**/
{
    int bookid;
    char title[20];
    float price;
};

int main()
{
    book b1;
    cout <<"Enter the bookid , title of book and its price :";
    cin>>b1.bookid>>b1.title>>b1.price;
    return 0;
}
