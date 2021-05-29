#include <iostream>
using std::cout; 
using std::cin;

int binaryS(int arr[], int key, int low, int high)
{
  if(low<=high)
  {
    int mid = (low+high)/2;

    if(key==arr[mid])
      return mid;
  
    else if(key<arr[mid])
      return binaryS(arr, key, low, mid-1);
  
    else
      return binaryS(arr, key, mid+1, high);
  }
  return -1;
}

int main()
{ 
  int size,key,low,high;
  int arr[] = {2,5,6,8,10};
  size = sizeof(arr)/sizeof(arr[0]);
  low = 0; high = size-1;
  key = 6;

  cout<<binaryS(arr,key,low,high)<<"\n";
  return 0;
}
