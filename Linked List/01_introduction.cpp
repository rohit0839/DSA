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
  
  temp->data = 2;           // (*temp).data = 2;
  temp->next = NULL;        // (*temp).next = NULL;

  head = temp;  

  cout<< temp->data<< " "<< temp->next;
 
  return 0;
}
