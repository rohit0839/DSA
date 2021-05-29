#include <iostream>
using std::cout; 
using std::cin;

void insertionSort(int a[], int n)
{
  int x, j;
  for(int i=1; i<n; i++)
  {
    x = a[i];
    j = i-1;
    while(j>=0 && a[j]>x)
    {
      a[j+1] = a[j];
      j = j-1;
    }
      a[j+1] = x;
  }
}

int main()
{ 
  int arr[] = {10,5,8,6,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  insertionSort(arr,size);

  for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
  return 0;
}
