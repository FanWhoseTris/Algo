#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a<0 or b<0 or c<0) or ((a+b<c) or (a+c<b) or (b+c<a)))
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}

