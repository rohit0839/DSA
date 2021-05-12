#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
  Node* t = new Node();
  if(t == NULL)
    cout<<"Queue is full";
  else
  {
    t->data = x;
    t->next = NULL;

    if(front == NULL)
      front = rear = t;
    else
    {
      rear->next = t;
      rear = t;
    }
  }
}

int dequeue()
{
  int x = -1;
  Node* t = NULL;

  if(front == NULL)
    cout<<"Queue is empty\n";
  else
  {
    x = front->data;
    t = front;
    front = front->next;
    delete t;
  }
  return x;
}

void display()
{
  Node* p = front;
  while(p)
  {
    cout<<p->data<<" ";
    p = p->next;
  }
  cout<<"\n";
}


int main()
{
  enqueue(10);
  enqueue(20);
  enqueue(30);
  enqueue(40);
  cout<<dequeue()<<"\n";
  display();
  
  return 0;
}
