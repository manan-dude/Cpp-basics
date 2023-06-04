#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Data-Structure for Trie
class TrieNode
{
    public:
    char data; // har node ek data rakhti hai 
    TrieNode* children[26];//har node ke 26 alphabets 
    //children ho saktein hai
    //ab terminate bhi to karna padega , ki konsa word ka last alphabet hai
    bool isTerminal;

    //constructor
    TrieNode(char ch)
    {
        data = ch;
        //sarein children null hotein hai
        for(int i=0;i<26;i++)
        {
            children[i]=NULL;
        }
        //or terminal bhi false hoga
        isTerminal= false;

    }

};

//Implementations
class Trie{
   
   public:
   TrieNode* root;

   //constructor
   Trie()
   {
       //null se start hoti hai root node
       root = new TrieNode('\0');
   }

// yaha working hai puri 
   void insertUtil(TrieNode* root ,string word)
   {
       //string ko recursively traverse karenge
       //base case 
       if(word.size()==0)
       {
           //last word tak aa chuka hu 
           root->isTerminal=true;
           return;
       }
       // ab insertion karna hai 26 children mein se kisi ek mein
       int index = word[0]-'A'; // assumption insertion CAPS mein ho raha hai
       // child node naya
       TrieNode* child;

       // ab check karenge ki wo present hai ya nahi 

       //agar hai
       if(root->children[index]!=NULL)//children[index] wo child node
       {
           //aage badh jao
           child = root->children[index];

       }
       //agar nahi hai
       else
       {
        //naya child bnaya
           child = new TrieNode(word[0]);
        //root mein add kar diya 
           root->children[index]=child;
       }

       //ab recursive call
       //1 index se saarien characters
       insertUtil(child,word.substr(1));



   }
// ye call karenge
   void insert(string word)
   {
          insertUtil(root,word);
   }
   
   
//Searching
bool searchUtil(TrieNode* root ,string word)
{
    //base case
    if(word.size()==0)
    {
        //last node agar true hai to hai verna nahi 
        return root->isTerminal;
    }
    
    TrieNode* child;
    int index = word[0]-'A';
    //agar node hai toh aage badho
    if(root->children[index]!=NULL)
    {
        child = root->children[index];
    }
    //nahi hai toh false
    else
    {
        return false;
    }
    
    //recursion
    return searchUtil(child,word.substr(1));
}

void  removalUtil(TrieNode* root ,string word)
{
    //base case
    if(word.size()==0)
    {
        //last node agar true hai to hai, verna usse false kar dena toh kabhi wo jaayega hi nahi waha
       root->isTerminal = false;
       return;
    }
    
    TrieNode* child;
    int index = word[0]-'A';
    //agar node hai toh aage badho
    if(root->children[index]!=NULL)
    {
        child = root->children[index];
    }
    else
    {
        return;
    }
   
    //recursion
    removalUtil(child,word.substr(1));
}
bool search(string word)
{
    return searchUtil(root,word);
}


void removal(string word)
{
    removalUtil(root,word);
}

};

int main() {
   
   Trie * t = new Trie();
   t->insert("abcd");
    t->insert("efgh");
     t->insert("mnop");
     t->insert("pqrs");
     t->removal("abcd");
     t->insert("abcd");
   cout<<t->search("abcd")<<"\n";
   cout<<t->search("abcdw")<<"\n";
    cout<<t->search("efgh")<<"\n";
    t->removal("efgh");
     cout<<t->search("nop")<<"\n";
     cout<<t->search("pqr")<<"\n";
      cout<<t->search("efgh")<<"\n";
       t->removal("efgh");
       cout<<t->search("pqrs")<<"\n";
        t->removal("pqrs");
        cout<<t->search("pqrs")<<"\n";
        
       
  
  
   
    
    return 0;
}
