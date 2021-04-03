/* A function calling itself is recursion. A base condition should be present to terminate recursion */

#include <iostream>
using std::cout;
using std::cin;

void indirect_recursion2(int);

void tail_recursion(int a)
{
  if(a > 0)
  {
    cout<<a<<" ";
    tail_recursion(a-1);
  }
}

void head_recursion(int b)
{
  if(b > 0)
  {
    head_recursion(b-1);
    cout<<b<<" ";
  }
}

void tree_recursion(int c)
{
  if(c > 0)
  {
    cout<<c<<" ";
    tree_recursion(c-1);
    tree_recursion(c-1);
  }
}

void indirect_recursion(int d)
{
  if(d > 0)
  {
    cout<<d<<" ";
    indirect_recursion2(d-1);
  }
}
void indirect_recursion2(int e)
{
  if(e > 1)
  {
    cout<<e<<" ";
    indirect_recursion(e/2);
  }
}

int nested_recursion(int f)
{
  if(f > 5)
    return f-1;
  else
    return nested_recursion(nested_recursion(f+5));
}

int main() 
{
  int x = 3;
  tail_recursion(x);             // 3 2 1
  cout<<"\n";
  head_recursion(x);            // 1 2 3
  cout<<"\n";
  tree_recursion(x);           // 3 2 1 1 2 1 1
  cout<<"\n";
  indirect_recursion(x);      // 3 2 1
  cout<<"\n";
  cout<< nested_recursion(x);  // 6
  return 0;
}


