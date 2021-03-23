#include <iostream>
#include <algorithm>
using std::cout; 
using std::cin;

struct Array
{
  int A[100];
  int size;
  int length;
};

void Display(struct Array arr)
{
  cout<<"Elements are:\n";
  for(int i = 0; i < arr.length; i++)
    cout<< arr.A[i] <<" ";
  cout<<"\n";
}

void Append(struct Array *arr, int x)
{
  if(arr->length < arr->size)
    arr->A[arr->length++] = x; 
}

void Insert(struct Array *arr, int index, int x)
{
  if(index >= 0 && index <= arr->length)
  {
    for(int i = arr->length; i > index ; i--)
      arr->A[i] = arr->A[i-1];
    arr->A[index] = x;
    arr->length++;
  }
}

void Delete(struct Array *arr, int index)
{
  int x =0;
  if(index > 0 && index < arr->length)
  {
    for(int i = index; i < arr->length-1; i++)
      arr->A[i] = arr->A[i+1];
    arr->length--;
  }
}

int Search(struct Array *arr, int key)
{
  for(int i = 0; i < arr->length; i++)
  {
    if(key == arr->A[i])
      return i;
  }
  return -1;
}

void Reverse(struct Array *arr)
{
  for(int i = 0, j = arr->length-1; i<j; i++, j--)
  {
    std::swap(arr->A[i], arr->A[j]);
  } 
}

int main() 
{
  struct Array arr = {{3,1,9,7,5},20,5};

  Display(arr);
  Append(&arr,12);
  Display(arr);
  Insert(&arr,3,15);
  Display(arr);
  Delete(&arr,3);
  Display(arr);
  cout<<"Element found at index: "<< Search(&arr,5) <<"\n";
  Reverse(&arr);
  Display(arr);

  return 0;
}
