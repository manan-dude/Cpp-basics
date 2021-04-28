#include <iostream>

using namespace std;
int sum(int,int);
int main()
{
    int a=5,b=6;
    int s = sum(a,b);
    cout<<"the sum of two numbers is:"<<s;
    return 0;
}
int sum(int x,int y)
{
    return(x+y);
}
