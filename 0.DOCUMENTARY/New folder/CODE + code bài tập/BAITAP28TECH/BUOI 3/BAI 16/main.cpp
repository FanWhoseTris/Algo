#include <iostream>

using namespace std;

int main()
{
 long long  a,y,h=0;
   cin>>a;
   for(int i=1;i<=18;i++)
   {
       if(a>0)
       {
           y=a%10;
          if(y==2 or y==3 or y==5 or y==7)
          {
             ++h;
          }
          a=a/10;
       }
   }
   cout<<h;
   return 0;
}
