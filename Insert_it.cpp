#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n; 
    cin>>n;
    int a[n]; 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int> aa(a,a+n);
    int m; 
    cin>>m;
    int b[m];
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    vector<int> bb(b,b+m);
    int x; 
    cin>>x; 
    for(int i=m-1; i>=0; i--)
    {
       
        aa.insert(aa.begin()+x,b[i]);
    }
    for(int val:aa)
    {
        cout<<val<<" ";
    }
    return 0; 
}