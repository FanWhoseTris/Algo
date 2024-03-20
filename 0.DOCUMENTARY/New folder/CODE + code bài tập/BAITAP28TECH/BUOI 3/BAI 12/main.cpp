#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a,y;
  cin>>a;
  for(int i=1;i<=18;i++)
  {
      if(a>0)
      {
          a=a/10;
          y=i;
      }
  }
  cout<<y;
  return 0;

}
