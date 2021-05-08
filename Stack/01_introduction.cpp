#include <iostream>
using std::cout; 
using std::cin;

struct Stack
{
    int size;
    int top;
    int* S;
};

void create(Stack *st)
{
  cout<<"Enter Size:\n";
  cin>>st->size;
  st->top = -1;
  st->S = new int[st->size];
}

void Display(Stack st)
{
  for(int i = st.top; i>=0; i--)
    cout<<st.S[i]<<" ";
  cout<<"\n";
}

void push(Stack *st, int x)
{
  if(st->top == st->size-1)
    cout<<"Stack overflow\n";
  
  else
  {
    st->top++;
    st->S[st->top] = x;
  }
}

int pop(Stack *st)
{
  int x =-1;
  if(st->top == -1)
    cout<<"Stack underflow\n";
  
  else
  {
    x = st->S[st->top];
    st->top--;
  }
  return x;  
}

int peek(Stack st,int index)
{
  int x =-1;
  if(st.top-index+1 < 0)
    cout<<"Invalid Index\n";
  
  x = st.S[st.top-index+1];
  return x;
}

int isEmpty(Stack st)
{
  if(st.top == -1)
    return 1;
  return 0;
}

int isFull(Stack st)
{
  if(st.top == st.size-1)
    return 1;
  return 0;
}

int main()
{
  Stack st;
  create(&st);

  push(&st,10);
  push(&st,20);
  push(&st,30);
  push(&st,40);
  push(&st,50);
  
  cout<<pop(&st)<<"\n";

  Display(st);

  return 0;
}
