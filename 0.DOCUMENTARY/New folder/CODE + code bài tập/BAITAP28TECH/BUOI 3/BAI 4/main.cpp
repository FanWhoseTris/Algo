#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int a;
   float s=0;
   cin>>a;
   for(int i=1;i<=a;i++)
   {
       s=s+1/(float)i;
   }
   cout<<fixed<<setprecision(3)<<s;
   return 0;
}
