#include <iostream>
using std::cout; 
using std::cin;

int main() 
{ 
  int visit[10] = {0};
  int num = 1729;
  
  while(num)
  {
    int d = num % 10;
    visit[d]++;
    num = num/10;
  }

  for(int i=0; i<10; i++)
      cout<<visit[i]<<"\t";
      
  return 0;
}
