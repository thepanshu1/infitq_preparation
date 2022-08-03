#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i=i+2)
    {
        if(a[i]>a[i+1])
        {
            a[i+1] = a[i-1];
            a[i]= -1;
            a[i-1] = -1;
        }
    }
    for(int i=0;i<n;i=i+2)
    {
        if(a[i] != -1)
         cout<<"[ "<<a[i]<<" , "<<a[i+1]<<" ]"<<" , ";
    }


}