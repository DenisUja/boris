#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,r;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    x=a;
    y=b;
    r=a%b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    if(b==1)
    cout<<"Numerele "<<x<<" si "<<y<<" sunt prime intre ele ";
    else cout<<" nu sunt prime intre ele ";
}
