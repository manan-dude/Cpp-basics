
#include <iostream>

using namespace std;

class Node
{
  public:
  int data;
  Node* next;
  
  //constructor
  Node(int data)
  {
      this->data = data;
      this->next = NULL;
  }
  
  ~Node()
  {
      int val = this->data;
      
      if(this->next!=NULL)
      {
          this->next=NULL;
      }
      cout<<"Deleted value:"<<val<<"\n";
      
      
  }
    
};

//As per its circular we really don't know where to start or friend
// So for reference we are taking the value of the Node

void insertNode(Node * & tail, int element , int d)
{
    // Assuming that the reference element is present
    // if node is empty
     if(tail==NULL)
     {
         Node * n1  = new Node(d);
         tail=n1;
         n1->next = n1; // pointing self as its circular
     }
     
     else
     {
         //non-empty 
         // traverse to find the element
         
         Node * curr = tail;
         while(curr->data!=element)
         {
             curr = curr->next;
             
         }
         
         // create a node;
         Node* n1 = new Node(d);
         n1->next = curr->next;
         curr->next = n1;
         
         
     }
     
}


void print(Node * tail)
{
    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
         tail= tail->next;
    }
    while(tail!=temp);
    cout<<"\n";
    
}

void deleteNode(Node* & tail, int element)
{
    //Empty list
    if(tail==NULL)
    {
        cout<<"List is Empty\n";
        return;
    }
    
    else
    {
        Node* curr = tail;
        Node * prev = NULL;
        while(curr->data!=element)
        {
            prev = curr;
            curr = curr->next;
        }
        
        prev->next=curr->next;
        curr->next = NULL;
        delete curr;
    }
}


int main()
{
    
    Node* tail = NULL;
    insertNode(tail,1,3);
     print(tail);
     insertNode(tail,3,4);
      print(tail);
      insertNode(tail,3,5);
    print(tail);
    deleteNode(tail,5);
     print(tail);

    return 0;
}
