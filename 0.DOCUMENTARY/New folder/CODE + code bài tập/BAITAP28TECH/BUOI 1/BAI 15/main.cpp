 #include <iostream>

using namespace std;

int main()
{
    int n,Ok=0;
    cin>>n;
    if(n%3==0 and n%5==0)
    {
        Ok=1;
    }
    else{Ok=0;}
    cout<<Ok;
    return 0;
}
