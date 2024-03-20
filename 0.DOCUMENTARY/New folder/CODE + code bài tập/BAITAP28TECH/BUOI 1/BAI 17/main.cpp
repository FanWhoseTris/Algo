#include <iostream>

using namespace std;

int main()
{
   int thang,nam,ngay=0;
   cin>>thang>>nam;
   if((thang<0)or(nam<0))
   {
       cout<<"INVALID";
   }
    if((nam%400==0)or((nam%4==0)and(nam%100!=0))and(thang==2))
    {
        ngay=29;
    }

    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
    {
        ngay=31;
    }
    if(thang==4||thang==6||thang==9||thang==11)
    {
        ngay=30;
    }
    if(thang==2)
    {
        ngay=28;
    }



    cout<<ngay;
    return 0;
   }




