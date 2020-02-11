#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n,a=0,b=0,c;
        cin>>n;
        while(n--)
        {
            cin>>c;
            a+=((c/30)+1)*10;
            b+=((c/60)+1)*15;
        }
        if(a<b)
        cout<<"Case "<<i<<": Mile "<<a<<endl;
        else if(a>b)
            cout<<"Case "<<i<<": Juice "<<b<<endl;
        else
            cout<<"Case "<<i<<": Mile Juise "<<a<<endl;

    }
    return 0;
}
