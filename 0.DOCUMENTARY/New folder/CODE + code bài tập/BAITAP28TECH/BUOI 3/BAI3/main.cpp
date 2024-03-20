#include <iostream>

using namespace std;

int main()
{
   int a,s=0;
   cin>>a;
   for(int i=1;i<=a;i++)
   {
       if(i%3==0)
       {
           s=s+i;
       }
   }
   cout<<s;
   return 0;
}
