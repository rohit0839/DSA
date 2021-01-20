#include <iostream>
using std::cout;
using std::cin;

int fact(int n)
{
  if(n==0)
    return 1;
  else
    return fact(n-1)*n;
}
int main() 
{
  cout<<fact(12); 
  return 0;
}
