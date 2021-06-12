#include <iostream>
using std::cout; 
using std::cin;

bool checkPalindrome(int a[], int n)
{
  int low, high;
  low = 0; high = n-1;

  while(low<high)
  {
    if(a[low]!=a[high])
      return false;
    low++;
    high--;
  }
  return true;
}

int main()
{ 
  int arr[] = {3, 6, 0, 6, 3};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<checkPalindrome(arr,size)<<"\n";
  
  return 0;
}
