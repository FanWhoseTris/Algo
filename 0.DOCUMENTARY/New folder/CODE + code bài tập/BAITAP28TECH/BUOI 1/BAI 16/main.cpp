#include <iostream>

using namespace std;

int main()
{
  int x;
  cin>>x;
  if(x<0){
    cout<<"INVLAUA";
  }
  if((x%4==0)and(x%100!=0))
  {
      cout<<"YES";
  }
  else{cout<<"NO";}
  return 0;
}
