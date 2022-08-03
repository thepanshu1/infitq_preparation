#include<bits/stdc++.h>
using namespace std;
void display(int a[], int n) //* PRINT THE ARRAY *
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main()
{
     int a[100],n,m,b[100];
     cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i] < a[j])
             swap(b[i] , a[j]);
            
        }
    }
    
    display(a,n);
    sort(b,b+m);
    display(b,m);
}
