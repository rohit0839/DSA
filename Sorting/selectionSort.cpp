#include <iostream>
#include <algorithm>
using std::cout; 
using std::cin;

void selectionSort(int A[],int n)
{
  int i,j,k;
    for(i=0;i<n-1;i++)
    {
      for(j=k=i;j<n;j++)
      {
        if(A[j]<A[k])
        k=j;
      }
      std::swap(A[i],A[k]);
    }
}

int main()
{ 
  int arr[] = {10,5,8,6,2,1};
  int size = sizeof(arr)/sizeof(arr[0]);

  selectionSort(arr,size);

  for(int i=0; i<size; i++)
    cout<<arr[i]<<" ";
  return 0;
}
