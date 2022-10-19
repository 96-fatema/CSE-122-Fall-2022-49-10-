//codeforces problem no: 116A
//codeforces problem name: Tram
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,r[10000]= {0},n,i,m=0;
    while(cin>>n)
    {
        m=0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            m=m+b-a;
            r[i]=m;
        }
        sort(r,r+n);
        cout<<r[n-1]<<endl;
    }
}
