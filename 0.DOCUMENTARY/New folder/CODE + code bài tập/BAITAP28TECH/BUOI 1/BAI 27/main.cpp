#include <iostream>

using namespace std;

int main()
{
    int a,nam,tuan,ngay;
    cin>>a;
    nam=a/365;
    tuan=((a-365*nam)/7);
    ngay=(a-365*nam-7*tuan);
    cout<<nam<<' '<<tuan<<' '<<ngay;
    return 0;
}
