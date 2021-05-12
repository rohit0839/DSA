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
  q->front = q->rear = 0;
  q->Q = new int();
}

void enqueue(Queue *q, int x)
{
  if(q->rear == q->size)
    cout<<"Queue is full\n";
  
  else
  {
    q->Q[q->rear] = x;
    q->rear++;
  }
}

int dequeue(Queue *q)
{
  int x = -1;
  if(q->front == q->rear)
    cout<<"Queue is empty\n";
  
  else
  {
    x = q->Q[q->front];
    q->front++;
  }
  return x;
}

void display(Queue q)
{
  for(int i=q.front; i<q.rear; i++)
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
