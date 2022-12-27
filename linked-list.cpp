#include <iostream>


using namespace std;
class Node{
    
    public://always make it public
    int data;
    Node *next;
};

class NodeOperation
{
    public://always make it public
    //function to add new Node
    void pushNode(class Node** head_ref , int data_val)
    {
        //Allocate node 
        class Node * new_node = new Node();
        
        //assigning value to the node 
        new_node -> data = data_val;
        
        //so the address to next of this node will be now of the head_node
        new_node->next = *head_ref;
        
        // head point to the new node
        *head_ref = new_node;
        
    }
    
    // function to print the linked list 
    
    void printNode(class Node *head) // temporary pointer 
    {
        while(head!=NULL)// traverse untill the end of the list
        {
            cout<< head->data<<"->";
            head = head->next;// increment in the address
        }
        cout<<"NULL"<<"\n";
    }
};

int main()
{
    class Node * head = NULL;// Initialization is must
    class NodeOperation * temp = new NodeOperation();// making your list .
   temp->pushNode(&head,45);//&head refer to the previous node.
   temp->pushNode(&head,452);
   temp->pushNode(&head,42);
   
   temp->printNode(head);
   

    return 0;
}
