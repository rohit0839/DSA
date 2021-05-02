#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
};

Node* head = NULL;

void create()
{ 
  Node* a = new Node(); Node* b = new Node();
  Node* c = new Node(); Node* d = new Node();
  Node* e = new Node(); Node* f = new Node();

  a->data = 4; a->next = b; b->data = 3; b->next = c;
  c->data = 5; c->next = d; d->data = 1; d->next = e;
  e->data = 9; e->next = f; f->data = 7; f->next = NULL;

  head = a;
}

void reverse()
{
  Node* p = head;
  Node* q = NULL;
  Node* r = NULL;

  while(p!=NULL)
  {
    r = q;
    q = p;
    p = p->next;
    q->next = r; 
  }
  head = q;
}

void display(Node *ch)
{
    while(ch!=NULL)
    {
      cout<<ch->data<<" ";
      ch = ch->next;
    }
  cout<<"\n";
}

int main()
{
  create();
  display(head);
  reverse();
  display(head);

  return 0;
}
