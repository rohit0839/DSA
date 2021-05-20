#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
    int key=0;
    Node *left=nullptr;
    Node *right=nullptr;
};

Node* newNode(int data)
{
    Node* node = new Node();
    node->key = data;
    node->left = nullptr;
    node->right = nullptr;
    return(node);
}

int search(Node *t, int x)
{
  if(t==nullptr)
        return -1;
    if(x==t->key)
        return t->key;
    else if(x>t->key)
        return search(t->right,x);
    else
        return search(t->left,x);
}

int main()
{ 
    Node *root = newNode(30);
    root->left = newNode(20);
    root->right = newNode(40);
    root->left->left = newNode(10);
    root->left->right = newNode(25);

    cout<<search(root,10);  
  return 0;
}

