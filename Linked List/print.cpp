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
  int n;
  cout<<"Enter Size:\n";
  cin>>n;

  Node* head = NULL;
  Node* tmp = new Node();
  head = tmp;
  Node* ch = head;
  
  for(int i=0;i<n;i++)
  {
    if(i!=0)
    {
      ch->next = new Node();
      ch = ch->next;
    }
    cout<<"Enter value at node "<<i+1<<":\n";
    cin>>ch->data;
    ch->next = NULL;
  }

  while(head!=NULL)
  {
    cout<<head->data<<"\t";
    head = head->next;
  }
  return 0;
}

