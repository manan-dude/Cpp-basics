#include <iostream>
#include <stack>

using namespace std;
class MinStack
{

    stack<int>s; // main stack to store the elements
    stack<int>aux; // auxiliary to store minimum elements

public:
    // making push function according to our program
    void push(int val)
    {

        // there is no barrier pushing into main stack
        s.push(val);

        // but for the auxiliary
        // if it is empty or the value is less than or equal
        // to the minimum

        if(aux.empty())
        {

            aux.push(val);
        }
        else{
            if(aux.top()>=val)
            {

                aux.push(val);
            }
        }
    }

    int pop()
    {
        // remove the element from the main stack
        int top = s.top();
        s.pop();

        // remove the element from the auxiliary if the minimum is removed from the

        if(aux.top()==top)
        {

            aux.pop();
        }
        return top;


    }

    // returns the top
    int top()
    {

        return s.top();
    }

    int size()
    {

        return s.size();
    }

    bool isEmpty()
    {

        return s.empty();
    }

    //return the minimum

    int getMin()
    {

        return aux.top();
    }

};

int main()
{
    MinStack s;

   s.push(5);
   s.push(7);
   s.push(6);
   s.push(8);
   s.push(10);


    cout << s.pop() << endl;    // prints 5
    cout << "minimum number is " << s.getMin() << endl;    // prints 6 << endl;
    return 0;
}
