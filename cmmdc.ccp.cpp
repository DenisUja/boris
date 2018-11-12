#include<iostreaM>
using namespace std;
int main()
{
    int a,b;
    cout<<"a=";cin>>a;
    cout<<"b=";cin>>b;
    if(a==1){cout<<"1";}
    else
    if(b==1){cout<<"1";}
    else
    if(a==b)cout<<a;
    else
        if(a<b)
    {
        while(a!=b)
        {
            b=b-a;
            cout<<b;
            return 0;
        }
    }
    else
    while(a!=b)
    {
        a=a-b;
        cout<<a;
        return 0;
    }
}
