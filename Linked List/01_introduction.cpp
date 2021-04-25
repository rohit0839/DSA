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
  
  Node* temp = new Node();
  // Node* temp = (Node*)malloc(sizeof(Node)); 
  
  temp->data = 2;           // (*n1).data = 2;
  temp->next = NULL;        // (*n1).next = NULL;

  head = temp;  

  cout<< temp->data<< " "<< temp->next;
 
  return 0;
}
