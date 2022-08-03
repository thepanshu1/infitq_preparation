#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,m,b[100];
     cin>>n;
     m=n-1;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        b[i] = i;
    }

    for(int i=1;i<=n;i++)
    {
         if(b[a[i]] == 0)
          cout<<a[i]<<"  ";
        else
          b[a[i]] = 0;
    }
    for(int i=1;i<=n;i++)
    {
         if(b[i] != 0)
          cout<<i<<endl;
    }

}