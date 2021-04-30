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

int remove(int pos)
{
  Node* p;
  Node* q;
  int x = -1;
  if(pos==1)
  {
    x = head->data;
    p = head;
    head = head->next;
    delete p;
  }
  else
  {
    p = head;
    q = NULL;
    for(int i=1; i<pos && p; i++)
    {
      q = p;
      p = p->next;
    }
    if(p)
    {
      q->next = p->next;
      x = p->data;
      delete p;
    }
  }
  return x;
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
  cout<<remove(4)<<"\n";
  display(head);

  return 0;
}

