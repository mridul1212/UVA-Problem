#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b[100];
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        int c=0,d=0;

        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(i==n-1)
                break;
                if(b[i]==b[i+1]) continue;
             if(b[i]<b[i+1])
                c++;

            else
                d++;

        }
        cout<<"Case "<<i<<": "<<c<<" "<<d<<endl;
    }
    return 0;
}
