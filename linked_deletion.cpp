#include <iostream>

using namespace std;

class Node{
 public:
 
    int data;
    Node* next;
    
    Node(int data)
    {
        this->data=data;
        this->next = NULL;
    }
    
    ~Node()
    {
        int val = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"deleted value is:"<<val<<"\n";
    }
    
};

void deleteNode(int pos , Node*&head)
{
    if(pos==1)
    {
        Node * temp = head;
        head = head->next;
        temp->next=NULL;
        
        delete temp;
        
    }
    else
    {
        Node* curr = head;
        Node * pre = NULL;
        int cnt =1;
        while(cnt<pos)
        {
            pre = curr;
            curr = curr->next;
            cnt++;
        }
        
        pre->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void InsertAtHead(Node * &head , int d)
{
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node * &head)
{
    Node * temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
        
    }
    
    cout<<"\n";
}

void InsertAtTail(Node * &head, int d)
{
    Node * temp = head;
    Node * n1 = new Node(d);
    while(temp->next!=NULL)
    {
        temp= temp->next;
    }
    temp->next = n1;
    n1->next = NULL;
    
}


void InsertAtMiddle(Node* &head, int pos,int d)
{
    
    Node * temp = head;
    Node * n1 = new Node(d);
    int cnt =1;
    if(pos==1)
    {
        InsertAtHead(head,d);
        return;
    }
    while(cnt<pos-1)
    {
        temp= temp->next;
        cnt++;
    }
    n1->next = temp->next;
    temp->next = n1;
    
    
}
int main()
{
    Node * n1 = new Node(15);
    
    Node * head = n1;
    InsertAtHead(head,12);
    
    print(head);
    
    InsertAtHead(head,16);
    
    
     
    print(head);
    
    InsertAtTail(head,18);
    
    print(head);
    
    InsertAtTail(head,19);
    
    print(head);
    
       InsertAtHead(head,13);
        print(head);

        InsertAtHead(head,11);
        print(head);

        InsertAtMiddle(head,3,4);
         print(head);

          InsertAtMiddle(head,7,4);
         print(head);
         
         deleteNode(1,head);
         print(head);
         
         
         deleteNode(5,head);
         print(head);
         
      
   
     
    
    
    

    return 0;
}
