#include <iostream>
using namespace std;

int main()
{
 int a,b,c,OK;
 cin>>a>>b>>c;
 if((a<0 or b<0 or c<0) or ((a+b<c) or (a+c<b) or (b+c<a)))
    {
        cout<<"INVALID";
    }
else
{
if(
   (a==b) and (b==c))
 {
     OK=1;
 }
 if((a==b and b!=c) or ((a==c) and c!=b))
 {
     OK=2;
 }
 if((a*a+b*b==c*c)or(a*a+c*c==b*b)or(b*b+c*c==a*a))
 {
     OK=3;
 }

cout<<OK;
 }
 return 0;
}
