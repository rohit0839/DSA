#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
    int data;
    Node *left;
    Node *right;
}*root=nullptr;

void create(int key)
{
  Node* t = root;
  Node* r=nullptr,*p;
  if(root==nullptr)
  {
    p = new Node();
    p->data = key;
    p->left = nullptr;
    p->right = nullptr;
    root = p;
    return;
  }
  while(t!=nullptr)
  {
    r=t;
    if(key<t->data)
      t = t->left;
    else if(key>t->data)
      t = t->right;
    else
      return;
  } 
    p = new Node();
    p->data = key;
    p->left = p->right = nullptr;
    if(key<r->data)
      r->left = p;
    else
      r->right = p;   
}

void display(Node* t) 
{
    if(t == NULL)
      return;
    display(t->left);
    cout<<t->data<<"\n";
    display(t->right);
}

int main()
{ 
    create(10);
    create(5);
    create(20);
    create(8);
    create(30);

    display(root);
  return 0;
}
