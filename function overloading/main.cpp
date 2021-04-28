#include <iostream>

using namespace std;
int area(int,int);
float area(int);
int main()
{
    cout << "Hello world!" << endl;
    int r;
    cout<<"Enter the radius of the circle :";
    cin>>r;
    float A = area(r);

    cout<<"Area of circle is "<<A;
    int l,b;
    cout<<"\n Enter the breadth and length of rectangle:";
    cin>>l>>b;
    int a= area(l,b);
    cout<<"Area of Rectangle is "<<a;
    return 0;
}
float area(int R)
{
    return(3.14*R*R);
}
int  area(int x, int y)
{
    return(x*y);
}
