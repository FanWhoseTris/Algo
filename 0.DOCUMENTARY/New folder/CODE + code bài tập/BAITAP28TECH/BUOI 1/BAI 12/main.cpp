#include <iostream>

using namespace std;

int main()
{
   long long Sn,n;
   cin>>n;
   if(n%2==0)
   {
       Sn=n/2;
   }
   else{Sn=(n/2)-n;}
    cout<<Sn;
   return 0;
}
