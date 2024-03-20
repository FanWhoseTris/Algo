#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double Tong=0;
    cin>>n;
  for(double i=1;i<=n;i++)
  {
      Tong+=(1/(i*(i+1)));
  }
  cout<<fixed<<setprecision(2)<<Tong<<" ";;

  return 0;
}
