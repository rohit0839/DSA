#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
}*top=NULL;

void push(int x)
{
  Node* t = new Node();

  if(t==NULL)
    cout<<"Stack is full\n";
  else
  {
    t->data = x;
    t->next = top;
    top = t;
  }
}

int pop()
{
  Node* t; int x = -1;

  if(top == NULL)
    cout<<"Stack is Empty\n";
  else
  {
    t = top;
    top = top->next;
    x = t->data;
    delete t;
  }
  return x;
}

void display()
{
  Node* p;
  p = top;
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p = p->next;
  }
  cout<<"\n";
}


int main()
{ 
  push(10);
  push(20);
  push(30);
  push(40);
  cout<<pop()<<"\n";
  display();

  return 0;
}
