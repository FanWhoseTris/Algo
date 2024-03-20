#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==j or j==1 or i==n)
            {
                cout<<'*';
            }
            else{
                cout<<'.';
            }
        }
        cout<<endl;
    }
    return 0;
}