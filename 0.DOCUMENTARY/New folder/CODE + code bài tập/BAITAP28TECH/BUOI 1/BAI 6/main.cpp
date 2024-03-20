#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int x1,x2,y1,y2;
    double Khoang_cach;
    cin>>x1>>x2>>y1>>y2;
    Khoang_cach=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    cout<<fixed<<setprecision(2)<<Khoang_cach;
    return 0;

}
