#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
}*left=NULL,*right=NULL;

void printPreorder(Node *t)
{
  if(t!=NULL)
  {
    cout<<t->key<<" ";
    printPreorder(t->left);
    printPreorder(t->right);
  }
}

void printInorder(Node *t)
{
  if(t!=NULL)
  {
    printInorder(t->left);
    cout<<t->key<<" ";
    printInorder(t->right);
  }
}

void printPostorder(Node *t)
{
  if(t!=NULL)
  {
    printPostorder(t->left);
    printPostorder(t->right);
    cout<<t->key<<" ";
  }
}

int main()
{
    // 8 3 10 1 6 4 14 
    Node* root = new Node();
    root->key = 8;

    root->left = new Node();
    root->left->key = 3;
    root->left->left = new Node();
    root->left->left->key = 1;
    root->left->right = new Node();
    root->left->right->key = 6;

    root->right = new Node();
    root->right->key = 10;
    root->right->left = new Node();
    root->right->left->key = 4;
    root->right->right = new Node();
    root->right->right->key = 14;

    printPreorder(root);
    cout<<"\n";
    printInorder(root);
    cout<<"\n";
    printPostorder(root);
    cout<<"\n";
  
  return 0;
}
