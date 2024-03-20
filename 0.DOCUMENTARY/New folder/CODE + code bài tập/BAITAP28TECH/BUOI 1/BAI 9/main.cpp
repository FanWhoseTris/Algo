#include <iostream>

using namespace std;

int main()
{
   long long n,Tong=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    Tong+=i*i;
   }
   cout<<Tong;
return 0;
}
