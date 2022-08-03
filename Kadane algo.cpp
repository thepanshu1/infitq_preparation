#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100] = {-2,1,-3,4,-1,2,1,-5,4}; // here taken all the values
    
    int sum=0,ii=0,jj=0,iii=0,jjj=0;
    for(int i=0;i<9;i++)
    {
        int s=a[i],ss=0;
        for(int j=i+1;j<9;j++)
        {
            s=s+a[j];                  // adding values one by one
            
                if(s>ss)              // checking whether new continues sum is greater
                {
                    ss=s;
                    ii=i;            // storing the index from where the MAX start
                    jj=j;
                }
            
        }
        if(ss>sum)                 // checking whether new continues sum of Subarr is greater
        {
            sum=ss;
            iii=ii;               // storing the index from where the MAX start
            jjj=jj;

        }
    }
    cout<<sum<<"  i  j  ="<<iii<<" "<<jjj<<endl;

    for(int i=iii;i<=jjj;i++)
    {
        cout<<a[i]<<"  ";
    }
}