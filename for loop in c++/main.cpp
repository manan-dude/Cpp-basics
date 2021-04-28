#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int i,sum=0,value=0,sum1=0;
    for(i=0;i<=10;i++)
    {
        cout<<i<<"\n";
sum=sum+i;
    }
    cout<<"Enter the numbers";
while(cin>>value)/*as we know value is int type so if we enter any input rather than a integer it will stop running and give us sum of all the numbers we add **/
{
    sum1=sum1+value;
}


    cout<<"The sum of the number is:"<<sum;
    cout<<"The sum of the entered number is:"<<sum1;
    return 0;
}
