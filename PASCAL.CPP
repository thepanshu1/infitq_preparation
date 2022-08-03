#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++)

    {
            

        for(int j=1;j<n-1;j++)
        {
             a[i][j] =0;            

        }
        a[i][0] = 1;
            a[i][i] = 1;
    }


    for(int i=0;i<n;i++)

    {
            //a[i][0] = 1;
            //a[i][n-1] = 1;

        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";            

        }
        cout<<endl;
    }

     for(int i=1;i<n;i++)

    {
            

        for(int j=1;j<n-1;j++)
        {
            if(a[i][j] == 1)
             break;
            else
            {
                a[i][j]= a[i-1][j-1] +  a[i-1][j];
                //cout<<" jjj "<<a[i][j]<<" jjj "<<endl;
            }
             
        }
    }



    for(int i=0;i<n;i++)

    {
            //a[i][0] = 1;
            //a[i][n-1] = 1;

        for(int j=0;j<n;j++)
        {
            if(a[i][j] != 0)
              cout<<a[i][j]<<" ";            
            else
             continue;
        }
        cout<<endl;
    }
}