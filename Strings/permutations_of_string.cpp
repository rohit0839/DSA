#include <iostream>
#include <string>
#define endl "\n"
using std::cout; 
using std::cin;
using std::string;

void PrintPermuatations(string s, string ans)
{
  if(s.length() == 0)
  {
    cout<<ans<<endl;
    return;
  }

  for(int i = 0; i < s.length(); i++)
  {
    char ch = s.at(i);
    string left = s.substr(0,i);
    string right = s.substr(i+1);
    string newstr = left + right;
    PrintPermuatations(newstr, ans+ch);
  }
}

int main() 
{
  string st = "abc";
  PrintPermuatations(st , "");
  return 0; 
}
