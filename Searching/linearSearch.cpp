#include <iostream>
using std::cout; 
using std::cin;

int linearS(int arr[], int n, int x)
{
  for(int i=0; i<n; i++)
  {
    if(arr[i]==x)
      return i;
  }
  return -1;
}

int main()
{ 
  int size,key;
  int arr[] = {2,5,6,8,10};
  size = sizeof(arr)/sizeof(arr[0]);
  key = 6;

  cout<<linearS(arr,size,key)<<"\n";
  return 0;
}
