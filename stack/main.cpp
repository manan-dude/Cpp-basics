#include <iostream>
#define M 50
int a[M];
int top=-1;


using namespace std;

void peek()//return the top element
{
        if(top==M)// if stack is full
    {
        cout<<"StackOverflow\n";


    }
     else if(top==-1)// if stack is empty
    {
        cout<<"StackUnderflow\n";


    }
    else{
        cout<<a[top]<<"\n";
    }




}

void push(int num)
{

    if(top==M)
    {
        cout<<"StackOverflow\n";


    }
    else
    {
            top++;
            a[top]=num;//we insert a block.
    }
}
int pop ()
{

    if(top==-1)
    {
        cout<<"StackUnderflow\n";
        return 0;

    }
    else{
            return a[top--];// we remove a block

    }

}



int main()
{
  //Stack- LIFO,PUSH , POP , TOP , IsEmpty etc.5

  push(5);
  push(6);
  push(7);
  push(8);
  push(10);
  push(15);
  push(34);
  peek();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();

  peek();






    return 0;
}
