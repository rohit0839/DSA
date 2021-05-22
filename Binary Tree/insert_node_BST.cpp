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

void insert(Node *t, int x)
{
  Node* r =nullptr;
  while(t!=NULL)
  {
    r=t;
    if(x==t->key)
      return;
    else if(x<t->key)
      t = t->left;
    else
      t = t->right;
  }
  Node* p = new Node();
  p->key = x; p->left = p->right = nullptr;
  if(p->key<r->key)
    r->left = p;
  else
    r->right = p;
}

void display(Node* t) 
{
    if(t == NULL)
      return;
    display(t->left);
    cout<<t->key<<"\n";
    display(t->right);
}

int main()
{ 
    Node *root = newNode(30);
    root->left = newNode(20);
    root->right = newNode(40);
    root->left->left = newNode(10);
    root->left->right = newNode(25);
    root->right->left = newNode(35);
    root->right->right = newNode(50);

    insert(root,38);
    display(root);
  return 0;
}

