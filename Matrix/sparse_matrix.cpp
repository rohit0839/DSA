#include <iostream>
using std::cout; 
using std::cin;

struct Element
{
  int i;
  int j;
  int x;
};

struct Sparse
{
  int m;
  int n;
  int num;
  struct Element *e;
};

void create(struct Sparse *s)
{
  cout<<"Enter Dimensions:\n";
  cin>> s->m >> s->n;
  cout<<"Enter number of non-zero:\n";
  cin>> s->num;

  s->e = new Element[s->num];
  cout<<"Enter all elements:\n";
  for(int i=0; i<s->num; i++)
  {
    cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
  }
  cout<<"\n";
}

void display(struct Sparse s)
{
  int k=0;
  for(int i=0; i<s.m; i++)
  {
    for(int j=0; j<s.n; j++)
    {
      if(i==s.e[k].i && j==s.e[k].j)
        cout<<s.e[k++].x<<" ";
      else
        cout<<"0 ";
    }
    cout<<"\n";
  }
}
 
int main()
{
  struct Sparse s;
  create(&s);
  display(s);
  
  return 0;
}


