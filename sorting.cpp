#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int nums[100];
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int lo = 0; 
        int hi = n - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
        for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}