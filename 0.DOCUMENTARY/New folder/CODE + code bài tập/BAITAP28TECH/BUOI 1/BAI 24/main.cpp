#include <iostream>

using namespace std;

int main()
{
    char x,y;
    cin>>x;
    if(x>=65 and x<=122)
    {
        if(x>=65 and x<=90)
        {
            if(x=90)
            {
                y=x+7;
                cout<<y;

            }
            else
            {
                 y=(int)x+33;
            cout<<y;
            }

        }
        if(x>=97 and x<=122)
        {

            y=(int)x+1;
            cout<<y;

        }
    }
    else
    {
        cout<<"INVALD";
    }
    return 0;
}
