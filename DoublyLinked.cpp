

#include <iostream>

using namespace std;

class Node{
  public:
  int data ;
  Node * prev;
  Node * next;
  
  Node(int data)
  {
      this->data = data;
    // two pointers
      this->next = NULL;
      this->prev = NULL;
      
      
  }
  
 ~Node()
 {
     int val = this->data;
     if(this->next!=NULL)
     {
         this->next = NULL;
         delete next;
     }
     
     cout<<"Deleted value:"<<val<<"\n";
 }
};


void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
       temp = temp->next;
    }
    
    cout<<"NULL\n";
}

void InsertHead(Node* &head, int d)
{
    if(head==NULL)
    {
        Node* temp = new Node(d);
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
    }
    
}

void InsertTail(Node* head, int d)
{
    Node* temp = new Node(d);
    Node* loc = head;
    while(loc->next!=NULL)
    {
        loc= loc->next;
        
    }
    
    temp->prev = loc;
    loc->next = temp;
    loc = temp;
    

}

void InsertPos(Node* & head, int d , int pos)
{
    int cnt = 1;
    Node * temp = new Node(d);
    Node* loc = head;
    while(cnt<pos-1)
    {
        loc = loc->next;
        cnt++;
    }
    
    temp->next = loc->next;
    loc->next = temp;
    temp->prev = loc;
    (loc->next)->prev = temp;
    temp = loc;
}

void DeleteHead(Node* & head)
{
    Node * temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    delete temp;

}

void DeletePos(Node* & head, int pos)
{
    Node* curr = head;
    Node* prev = NULL;
    int cnt = 1;
    while(cnt<pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
        
    }
    
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next=NULL;
    
    delete curr;
}

    
int main()
{
    Node * n1 = new Node(10);
    Node* head = n1;
    
    InsertHead(head,8);
    InsertTail(head,9);
    InsertTail(head,20);
    InsertTail(head,30);
    InsertPos(head,3,2);
    print(head);
    
    
    DeleteHead(head);
    DeleteHead(head);
    DeletePos(head,3);
    print(head);
    
    DeletePos(head,3);
    print(head);
    
    

    return 0;
}
