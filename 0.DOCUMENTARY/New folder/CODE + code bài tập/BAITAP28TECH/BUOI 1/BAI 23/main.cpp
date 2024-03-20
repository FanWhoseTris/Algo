#include <iostream>

using namespace std;

int main()
{
   char x,y;
   cin>>x;
   if(x>=97 and x<=122)
   {
       y=(int)x-32;
       cout<<y;
   }
   else
   {
       cout<<x;
   }
   return 0;
}
