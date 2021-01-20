#include <iostream>
using std::cout;
using std::cin;

int fibonacci(int n)
{
  if(n<=1)
    return n;
  return fibonacci(n-2) + fibonacci(n-1);
}

int main() 
{
  cout<<fibonacci(7); 
  return 0;
}
