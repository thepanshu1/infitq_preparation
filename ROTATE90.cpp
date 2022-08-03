#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],n;
    cin>>n;
    int m=n;
    for(int i=0;i<n*n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n*n;)
    {
        for(int j=m-1;j<n*n;j = j+n)
        {
            //cout<<a[i]<<" ";
            b[j] = a[i];
            i++;
        }
        m--;

        //cout<<endl;
    }
    for (int i = 0; i < n*n; i++) 
    {
        cout << b[i] << "  ";
        if((i+1) % n == 0)
        {
            cout<<endl;
        }
    }

}