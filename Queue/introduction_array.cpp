#include <iostream>
using std::cout; 
using std::cin;

struct Queue 
{
  int size;
  int front;
  int rear;
  int *Q;
};

void create(Queue* q, int size)
{
  q->size = size;
  q->front = q->rear = -1;
  q->Q = new int();
}

void enqueue(Queue *q, int x)
{
  if(q->rear == q->size-1)
    cout<<"Queue is full\n";
  else
  {
    q->rear++;
    q->Q[q->rear] = x;
  }
}

int dequeue(Queue *q)
{
  int x = -1;
  if(q->front == q->rear)
    cout<<"Queue is empty\n";
  else
  {
    q->front++;
    x = q->Q[q->front];
  }
  return x;
}

void display(Queue q)
{
  for(int i=q.front+1; i<=q.rear; i++)
    cout<<q.Q[i]<<" ";
  cout<<"\n";
}

int main()
{
  Queue q;

  create(&q,5);
  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);

  cout<<dequeue(&q)<<"\n";
  display(q);
  
  return 0;
}
