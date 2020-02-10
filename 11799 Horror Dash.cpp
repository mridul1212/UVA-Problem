#include<iostream>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
         cin>>a;
        int n=0,c;

        while(a--)
        {
            cin>>c;
            if(n<c)
                n=c;
        }
        cout<<"Case "<<i<<": "<<n<<endl;
    }
    return 0;
}
