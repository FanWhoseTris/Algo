
    #include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    if(a%b==0)
    {
        c=a;
    }
    else{c=((a/b)+1)*b;}
    cout<<c;
    return 0;
}


