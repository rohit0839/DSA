#include <iostream>
using std::cout;
using std::cin;

int main() 
{
  // declaration and initializing 
  int a[3] = {1,2,3};   // 1 2 3
  int b[] = {4,5,6};    // 4 5 6
  int c[3] = {};        // 0 0 0
  int d[3] = {2};       // 2 0 0
  int e[3] = {[2]=5};   // 0 0 5  //works only with clang

  // array size
  cout<< sizeof(int[3]); // 12
  cout<< 3*sizeof(int);  // 12

  // accessing
  int arr[5] = {8,3,4,0,2};
  cout<< arr[2];    // 4
  cout<< 2[arr];    // 4
  
  cout<< arr;       //0x7ffd8dd41cd0
  cout<< &arr;      //0x7ffd8dd41cd0
  cout<< &arr[0];   //0x7ffd8dd41cd0

  cout<< *arr;            // 8
  cout<< *(arr+2);        // 4
  cout<< *arr+2;          // 10
  cout<< &(*(arr+1));     // 0x7ffd8dd41cd4
  cout<< *(&(arr[1])+2);  // 0

  return 0;
}
