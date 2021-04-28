#include <iostream>

using namespace std;
int sum(int,int,int=0);/*here ifyou want to assign first two value and later on three or more you should use default arguments it helps you to assign value at your own choice*/
/* if you want to assign only one value you use int sum(int,int=0,int=0)*/
int main()
{
    int a,b,c;
    cin>>a>>b;
    int s = sum(a,b);
    cout<<"the sum of two numbers is:"<<s;


    cin>>a>>b>>c;
    cout<<"the sum of three numbers is:"<<sum(a,b,c);

    return 0;
}
int sum(int x,int y,int z)
{
    return(x+y+z);
}

