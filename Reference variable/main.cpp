#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x=5;
    int &y=x;/* reference variable */
    y++;
    cout<<x;

    return 0;
}
