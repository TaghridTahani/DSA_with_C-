#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    cin>>n; 
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n+n);
    for(int i=0; i<a.size(); i++)
    {
        cin>>a[i]; 
    }
    for(int i=0; i<b.size(); i++)
    {
        cin>>b[i]; 
    }
    //c=b;
    int k=0; 
    for(int i=0; i<b.size(); i++)
    {
         
        c[i]=b[k];
        k++; 
    }

    int j=0;
    for(int i=b.size(); i<c.size(); i++)
    {
         
        c[i]=a[j];
        j++; 
    }
    for( int val: c)
    {
        cout<<val<<" "; 
    }
    
    return 0; 
}