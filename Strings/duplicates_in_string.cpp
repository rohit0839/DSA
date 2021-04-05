#include <iostream>
#include <string>
#define endl "\n"
using std::cout; 
using std::cin;

int main() 
{
  char st[] = "madam";   // lowercase
  int i, H[26]={0};

  for(i = 0; st[i]!='\0'; i++)
  {
    H[st[i]-97]++;
  }
  
  for(int i = 0; i<26; i++)
  {
    if(H[i]>1)
    {
      cout<<char(i+97)<<" : "<<H[i]<<endl;
    }
  }
  return 0; 
}

