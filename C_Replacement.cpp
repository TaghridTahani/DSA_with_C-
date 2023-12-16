#include<bits/stdc++.h>
using namespace std; 
int main()
{
    //replace(v.begin()+1,v.end(),20,2 );
    int n; 
    cin>>n; 
    vector<int>v(n); 
    for(int i=0; i<n; i++)
    {
        cin>>v[i]; 
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]>=1)
        {
            replace(v.begin(),v.end(),v[i],1);
        }
        else if(v[i]<=-1)
        {
            replace(v.begin(),v.end(),v[i],2);
        }
        else{
            continue; 
        }
    }
    for(int val: v)
    {
        cout<<val<<" ";
    }
    return 0; 
}