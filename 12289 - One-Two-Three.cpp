#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            char a[10];
            cin>>a;
            if(strlen(a)==5) cout<<3<<endl;
            else
            {
                int c=0;
                if(a[0]=='t') c++;
                if(a[1]=='o') c++;
                if(a[2]=='w') c++;
                if(c>=2) cout<<2<<endl;
                else cout<<1<<endl;
            }
        }
        return 0;
}
