#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],n,i;
    cin>>n;
    for(i=0;i<n*n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n*n;i++)
    {
        if(arr[i] == 0)
        {
            int g=i%n,k,kk;
            k=i-g;
            kk=k+n;
            for(k=i-g;k<kk;k++)
            {
                //cout<<k<<endl;
                
                    arr[k] = -1;
                
            }
            //cout<<"jjj"<<endl;
            for(int j=i-n;j<=n*n;)
            {
               // cout<<j<<endl;
                if(j>0)
                {
                    //cout<<j<<endl;
                    if(arr[j] == 0)
                    {
                        arr[j] = 0;
                    } 
                    else
                    {
                        arr[j] = -1;
                    } 
                    
                }
                
                j=j+n;
            }
            //cout<<"first zero tackel "<<endl;
        }
        else
         continue;
    }
    
    for(i=0;i<n*n;i++)
    {
        if(arr[i] == 1)
          cout<<1<<" ";
        else
         cout<<0<<" ";
        
        if(i%n == n-1)
         cout<<endl;
    }
}