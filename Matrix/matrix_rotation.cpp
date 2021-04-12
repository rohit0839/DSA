#include <iostream>
#define endl "\n"
using std::cout; 
using std::cin;
#define N 3

void display(int arr[N][N])
{
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<N; j++)
      cout<<arr[i][j]<<" ";
    cout<<endl;
  }
  cout<<endl;
}

void rotate90Clockwise(int arr[N][N])
{
  for(int j=0; j<N; j++)
  {
    for(int i=N-1; i>=0; i--)
      cout<<arr[i][j]<<" ";
    cout<<endl;
  }
  cout<<endl;
}

void rotate90AntiClockwise(int arr[N][N])
{
  for(int j=N-1; j>=0; j--)
  {
    for(int i=0; i<N; i++)
      cout<<arr[i][j]<<" ";
    cout<<endl;
  }
  cout<<endl;
}

int main() 
{
  int a[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
  
  display(a);
  rotate90Clockwise(a);
  rotate90AntiClockwise(a);
  
  return 0; 
}


