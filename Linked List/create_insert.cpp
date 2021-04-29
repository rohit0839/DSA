#include <iostream>
using std::cout; 
using std::cin;

struct Node
{
  int data;
  Node* next;
};

Node* head = NULL;
Node *t = NULL;
Node *p = NULL;

void insert(int pos,int n)
{
  if(pos==0)
  {
    t = new Node();
    t->data = n;
    t->next = head;
    head = t;
  }
  else if(pos>0)
  {
    p = head;
    for(int i=1; i<pos && p; i++)
      p=p->next;
    
    if(p)
    {
      t = new Node();
      t->data = n;
      t->next = p->next;
      p->next = t;
    }
  }
}

void display(Node *ch)
{
    while(ch!=NULL)
    {
      cout<<ch->data<<" ";
      ch = ch->next;
    }
}


int main()
{
  insert(0,6);
  insert(1,5);
  insert(2,8);
  insert(3,14);
  display(head);

  return 0;
}

