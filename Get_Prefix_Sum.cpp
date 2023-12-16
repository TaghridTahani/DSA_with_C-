#include<bits/stdc++.h>
using namespace std; 
int main()
{
    long long int n; 
    cin>>n; 
    long long int a[n]; 
    long long int pre[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i]; 
    }
    pre[0]=a[0];
    for(long long int i=1; i<n; i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    for(long long int i=n-1; i>=0; i--)
    {
        cout<<pre[i]<<" ";
    }
    return 0; 
}