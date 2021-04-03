#include <iostream>
using std::cout;
using std::cin;

int main() 
{
  int a = 2;            // copy initialization
  auto b = 4;

  int x, y, z = 5; 
  x = y = 10;
  
  int l (1);             // direct initialization
  auto m = (1);
  
  int n {4};             // uniform initialization 
  int o {};
  auto p = {4};
}
