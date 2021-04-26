#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
};

int main()
{
  Node n1;
  Node n2;
  n1.data = 9;
  n2.data = 6;
  Node *head;         // Node n3 = {1};

  head = &n1;
  n1.next = &n2;
  n2.next = NULL; 

  cout<<n1.data<<" "<<n2.data<<"\n";

  return 0;
}

