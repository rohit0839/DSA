#include <iostream>
#include <string.h>
using std::cout;
using std::cin;

int pow(int x, int n)
{
  if(n==0)
    return 1;
  return pow(x,n-1) * x;
}

int pow_alternative(int x, int n)
{
  if(n==0)
    return 1;
  else if(n % 2 == 0)
  {
    int y = pow_alternative(x,n/2);
    return y*y;
  }
  else
    return x * pow_alternative(x,n-1);
}

int main() 
{
  cout<<pow(3,4);
  return 0;
}
