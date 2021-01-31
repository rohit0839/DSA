#include <iostream>
#include <algorithm>
using std::cout; 
using std::cin;

int main() 
{

  int n,d;
  cin>>n>>d;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  std::reverse(a, a+d);
  std::reverse(a+d, a+n);
  std::reverse(a, a+n);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  return 0;
}
