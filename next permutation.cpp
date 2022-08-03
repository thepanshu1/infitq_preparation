#include<bits/stdc++.h>
using namespace std;

void display(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int lexSum(int a[] , int n)
{
     int sum=0,mul=1;
    for(int i=n-1;i>=0;i--)
    {
        sum=sum + (a[i]*mul);
        mul=mul*10;
    }
    return sum;
}
int main()
{
    int a[10],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int realSum = lexSum(a,n);
    for(int i=0;i<n*n;i++)
    {
        next_permutation(a, a + n);
        display(a,n);
        realSum = lexSum(a,n);
        cout<<realSum<<endl;
        permutation(a,a+n);
        
    }

    
}