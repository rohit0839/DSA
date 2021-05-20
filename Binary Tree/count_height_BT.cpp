#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
}*left=NULL,*right=NULL;

int getSize(Node* t)
{
  if(t==NULL)
    return 0;
  return getSize(t->left)+getSize(t->right)+1;
}

int nonLeaf(Node* t)
{
  if(t==NULL)
    return 0;
  if(t->left == NULL && t->right == NULL)
    return 0;
  return 1 + nonLeaf(t->left) + nonLeaf(t->right);
}

int leaf(Node* t)
{
  if(t==NULL)
    return 0;
  if(t->left == NULL && t->right == NULL)
    return 1;
  return leaf(t->left) + leaf(t->right);
}

int getSum(Node* t)
{
  if (t == NULL)
      return 0;
  return t->key + getSum(t->left) + getSum(t->right);
}

int getDepth(Node* t)
{
  if (t == NULL)
    return 0;
  else
    {
      int lDepth = getDepth(t->left);
      int rDepth = getDepth(t->right);

      if (lDepth > rDepth)
        return(lDepth + 1);
      else 
        return(rDepth + 1);
    }
}

Node* newNode(int data)
{
    Node* node = new Node();
    node->key = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

int main()
{
    // 1 2 3 4 5 
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<getSize(root)<<"\n";     // Size of BT
    cout<<nonLeaf(root)<<"\n";     // Non-Leaf nodes count
    cout<<leaf(root)<<"\n";        // Leaf nodes count
    cout<<getSum(root)<<"\n";      // Sum of all nodes
    cout<<getDepth(root)<<"\n";    // Maximum height/depth of BT

  return 0;
}
