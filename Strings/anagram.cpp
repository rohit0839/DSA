#include <iostream>
#include <string>
#define endl "\n"
using std::cout; 
using std::cin;

int main() 
{
  // lowercase
  char A[] = "listen";   
  char B[] = "silent";
  int i, H[26]={0};

  for(i = 0; A[i]!='\0'; i++)
  {
    H[A[i]-97]+=1;
  }

  for(i = 0; B[i]!='\0'; i++)
  {
    H[A[i]-97]-=1;
    if(H[A[i]-97]<0)
    {
      cout<<"Not Anagram"<<endl;
      break;
    }
  }
  
  if(B[i]=='\0')
    cout<<"Anagram"<<endl;

  return 0; 
}
