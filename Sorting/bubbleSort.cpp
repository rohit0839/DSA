#include <iostream>
using std::cout; 
using std::cin;

void bubbleSort(int a[], int n)
{
  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-1-i; j++)
    {
      if(a[j]>a[j+1])
      {
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
}

int main()
{ 
  int arr[] = {10,5,8,6,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  bubbleSort(arr,size);

  for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
  return 0;
}
