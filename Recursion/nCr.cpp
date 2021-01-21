#include <iostream>
#include <string.h>
using std::cout;
using std::cin;

int nCr(int n, int r)
{
  if(r == 0 || n == r)
    return 1;
  else
    return nCr(n-1,r-1) + nCr(n-1,r);
}

int main() 
{
  cout<<nCr(7,3);
  return 0;
}
