#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a%2==0)
    {
        for(int i=1;i<=6;i++)
        {
            if(a>0)
          {
              a=a-2;
              cout<<"2 ";
          }

        }
    }
    else
    {
        a=a-1;
       for(int i=1;i<=6;i++)
        {
            if(a>0)
          {
              a=a-2;
              cout<<"2 ";
          }

        }
        cout<<"3 ";
    }
    return 0;
}
