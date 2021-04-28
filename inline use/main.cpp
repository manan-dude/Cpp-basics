#include <iostream>

using namespace std;
inline void fun();/* We use inline for reducing time execution that is used by ram while calling function  */

int main()
{
    cout << "Hello world in main function!" << endl;
    fun();
    return 0;
}
void fun()
{
    cout<<"Welcome to fun";
}
