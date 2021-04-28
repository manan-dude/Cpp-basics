#include <iostream>

using namespace std;/**if you remove using namespace std ,you have to use std::cout and std::cin**/

int main()
{
    int a,b;
    cout<<"Enter two numbers a and b:";
    cin>>a>>b;
    int c = a+b;
    cout<<"The sum of the two number is:"<<c;

    return 0;
}
