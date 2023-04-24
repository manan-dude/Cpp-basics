#include <iostream>
using namespace std;
class Node{
 public: 
  int data;
  Node* left;
  Node* right;
  Node(int data)
  {
      this->data=data;
      left = NULL;
      right = NULL;
  }
  
  
};

//Insertion at left
void InsertAtLeft(Node* & root, int value)
{
    Node* temp = new Node(value);
    root->left = temp;
}

//Insertion at Right
void InsertAtRight(Node* & root, int value)
{
    Node* temp = new Node(value);
    root->right = temp;
}

//Traversing
void Preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
    
}

void Inorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    
   
    
}

// maximum height tree

int height(Node * root)
{
    if(root==NULL)
    {
        return 0 ;
    }
    else{
        int lh = height(root->left);
        int rh = height(root->right);
        
        if(rh>lh)
        {
            return (rh+1);
        }
        else{
            return (lh+1);
        }
    }
}



int main()
{
    Node* root = new Node(1);
    InsertAtRight(root,2);
    InsertAtLeft(root,3);
    InsertAtLeft(root->left,4);
    InsertAtRight(root->left,5);
    /*
               1
              /\
             3 2
            /\
           4 5
    */
cout<<"Preorder Traversal\n";
    Preorder(root);
cout<<"\nInorder Traversal\n";
    Inorder(root);
cout<<"\nPostorder Traversal\n";
    Postorder(root);
cout<<"\nHeight of the Tree\n";
   cout<<height(root);
    

    

    return 0;
}
