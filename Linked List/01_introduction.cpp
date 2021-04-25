#include <iostream>
#include <stdlib.h>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
};

int main()
{
  Node* head;
  head = NULL;
  
  Node* n1 = new Node();
  // Node* n1 = (Node*)malloc(sizeof(Node)); 
  
  n1->data = 2;           // (*n1).data = 2;
  n1->next = NULL;        // (*n1).next = NULL;

  head = n1;  

  cout<< n1->data<< " "<< n1->next;
 
  return 0;
}
