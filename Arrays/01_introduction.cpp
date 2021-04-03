#include <iostream>
#include <algorithm>
using std::cout; 
using std::cin;

struct Array
{
  int *A;
  int length;
};

void Display(struct Array arr)
{
  cout<<"Elements are:\n";
  for(int i = 0; i < arr.length; i++)
    cout<<arr.A[i]<<" ";
  cout<<"\n";
}

int main() 
{
  int i,n;
  struct Array arr;

  cout<<"Enter the length of an array:\n";
  cin>>arr.length;
  arr.A = new int[arr.length*sizeof(int)];

  cout<<"Enter all elements:\n";
  for(i = 0; i < arr.length; i++)
    cin>>arr.A[i];

  Display(arr);

  return 0;
}
