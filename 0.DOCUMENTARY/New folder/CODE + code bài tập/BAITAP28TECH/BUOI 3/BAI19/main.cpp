#include <iostream>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
   if(n==1)
   {
       for(int i=1;i<10;i++)
       {
           if(i%t==0)
           {
               cout<<i<<' ';
           }

       }

   }
   else if(n==2)
   {
       for(int i=10;i<100;i++)
       {
           if(i%t==0)
           {
            cout<<i<<' ';
           }
       }
   }
   else if(n==3)
   {
       for(int i=100;i<1000;i++)
       {
           if(i%t==0)
           {
               cout<<i<<' ';
           }
       }
   }
   else
   {
       cout<<"-1";
   }
   return 0;
}
